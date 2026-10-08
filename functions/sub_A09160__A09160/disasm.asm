0xA09160: push    offset stru_B3FC98; parent
0xA09165: push    offset aNifloatcontrol; "NiFloatController"
0xA0916A: mov     ecx, offset stru_B3EEA8; this
0xA0916F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09174: retn
