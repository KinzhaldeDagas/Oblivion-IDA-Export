0xA0B050: push    offset stru_B40D60; parent
0xA0B055: push    offset aNipsyssphereem; "NiPSysSphereEmitter"
0xA0B05A: mov     ecx, offset stru_B40968; this
0xA0B05F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0B064: retn
