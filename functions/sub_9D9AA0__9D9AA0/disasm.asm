0x9D9AA0: push    offset parent; parent
0x9D9AA5: push    offset aScenegraph_0; "SceneGraph"
0x9D9AAA: mov     ecx, offset stru_B33454; this
0x9D9AAF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9D9AB4: retn
