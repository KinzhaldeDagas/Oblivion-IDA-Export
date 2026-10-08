struct __declspec(align(8)) eax_buffer_info
{
BOOL reverb_update;
float reverb_mix;
float *SampleBuffer;
unsigned int TotalSamples;
FILTER LpFilter;
DelayLine_0 Delay;
unsigned int DelayTap[2];
$DE573ED73EB11FA71AB5084476B2E8D8 Early;
DelayLine_0 Decorrelator;
unsigned int DecoTap[3];
$72D5B66CB0F7CF11FFE020BA1D89F087 Late;
unsigned int Offset;
};
