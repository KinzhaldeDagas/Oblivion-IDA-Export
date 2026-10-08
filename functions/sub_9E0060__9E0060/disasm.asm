0x9E0060: push    offset parent; parent
0x9E0065: push    offset aBscellnode; "BSCellNode"
0x9E006A: mov     ecx, 0B35278h; this
0x9E006F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9E0074: retn
