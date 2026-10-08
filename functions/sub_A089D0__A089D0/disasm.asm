0xA089D0: push    offset stru_B3FF14; parent
0xA089D5: push    offset aNigeommorpheru; "NiGeomMorpherUpdateTask"
0xA089DA: mov     ecx, offset stru_B3EC30; this
0xA089DF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA089E4: retn
