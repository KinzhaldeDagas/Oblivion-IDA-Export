0xA0A830: push    offset stru_B3FD14; parent
0xA0A835: push    offset aNiambientlight; "NiAmbientLight"
0xA0A83A: mov     ecx, offset stru_B40224; this
0xA0A83F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A844: retn
