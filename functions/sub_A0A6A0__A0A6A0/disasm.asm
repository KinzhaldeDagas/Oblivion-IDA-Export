0xA0A6A0: push    offset stru_B4012C; parent
0xA0A6A5: push    offset aNiscreenloddat; "NiScreenLODData"
0xA0A6AA: mov     ecx, offset stru_B401C0; this
0xA0A6AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A6B4: retn
