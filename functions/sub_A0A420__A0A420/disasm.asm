0xA0A420: push    offset stru_B3FE04; parent
0xA0A425: push    offset aNitribasedge_0; "NiTriBasedGeomData"
0xA0A42A: mov     ecx, offset stru_B40108; this
0xA0A42F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A434: retn
