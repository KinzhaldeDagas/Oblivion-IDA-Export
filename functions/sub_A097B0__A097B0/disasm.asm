0xA097B0: push    offset stru_B3FFA0; parent
0xA097B5: push    offset aBsxflags; "BSXFlags"
0xA097BA: mov     ecx, offset stru_B3F484; this
0xA097BF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA097C4: retn
