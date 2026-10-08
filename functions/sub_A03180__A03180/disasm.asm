0xA03180: push    offset stru_B3CDF8; parent
0xA03185: push    offset aNigeommorpherc; "NiGeomMorpherController"
0xA0318A: mov     ecx, offset stru_B3CE30; this
0xA0318F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA03194: retn
