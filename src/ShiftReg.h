#ifndef ShiftReg_h
#define ShiftReg_h
class ShiftReg
{
	//Declare the pins
	protected: //Declared as protected so that the subclass can access 
		uint8_t _latchPin;
		uint8_t _clockPin;
		uint8_t _dataPin;
		uint8_t _srNum; //variable for total number of shift registers in use
		uint8_t _mode;
		uint8_t _bitOrder;
		
	public:
		ShiftReg();	//default constructor
		void setPins(uint8_t latchPin, uint8_t clockPin, uint8_t dataPin);
		void setBITOrder(uint8_t bitOrder);
		void setTotalRegisters(uint8_t srNum);	//Sets the total number of shift registers used
		void commonCathode();
		void commonAnode();	//sets the register ouputs for a common anode display
		void bitOut_MSBF(uint8_t val);	//Outputs the bits at the datapin
		void bitOut_LSBF(uint8_t val);
		void chaser(int channels, int speed);	//channels is the number of channels
		~ShiftReg();	//default destructor for the class
};
#endif