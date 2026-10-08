struct __declspec(align(4)) _SERIAL_STATUS
{
ULONG Errors;
ULONG HoldReasons;
ULONG AmountInInQueue;
ULONG AmountInOutQueue;
BOOLEAN EofReceived;
BOOLEAN WaitForImmediate;
};
