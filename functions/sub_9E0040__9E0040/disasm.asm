0x9E0040: push    offset stru_B3CB24; parent
0x9E0045: push    offset aBsanimgroupseq; "BSAnimGroupSequence"
0x9E004A: mov     ecx, 0B35270h; this
0x9E004F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9E0054: retn
