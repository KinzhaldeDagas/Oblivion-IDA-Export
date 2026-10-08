struct __declspec(align(4)) _FILE_PIPE_PEEK_BUFFER
{
ULONG NamedPipeState;
ULONG ReadDataAvailable;
ULONG NumberOfMessages;
ULONG MessageLength;
CHAR Data[1];
};
