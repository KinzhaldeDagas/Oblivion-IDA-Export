0xA047A0: push    offset stru_B3F584; parent
0xA047A5: push    offset aNisequencestre; "NiSequenceStreamHelper"
0xA047AA: mov     ecx, offset stru_B3DAA8; this
0xA047AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA047B4: retn
