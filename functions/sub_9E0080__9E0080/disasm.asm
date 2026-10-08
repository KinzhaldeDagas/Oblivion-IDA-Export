0x9E0080: push    offset parent; parent
0x9E0085: push    offset aBsclearznode; "BSClearZNode"
0x9E008A: mov     ecx, 0B35280h; this
0x9E008F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9E0094: retn
