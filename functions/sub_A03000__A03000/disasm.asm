0xA03000: push    offset stru_B3FC98; parent
0xA03005: push    offset aNiinterpcontro; "NiInterpController"
0xA0300A: mov     ecx, offset stru_B3CDF8; this
0xA0300F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA03014: retn
