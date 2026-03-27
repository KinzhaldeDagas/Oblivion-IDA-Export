0x506E90: push    offset aClearingFacege; "Clearing Facegen Model Data"
0x506E95: call    Interface_ConsolePrint
0x506E9A: mov     ecx, ds:0B333A0h; this
0x506EA0: add     esp, 4
0x506EA3: push    0; a3
0x506EA5: push    1; a2
0x506EA7: call    sub_442630
0x506EAC: mov     ecx, ds:0B333A0h; this
0x506EB2: push    0; a2
0x506EB4: call    sub_43FC20
0x506EB9: mov     ecx, ds:0B33398h
0x506EBF: push    1
0x506EC1: call    OSGlobals_PurgeModels
0x506EC6: call    sub_54FE90
0x506ECB: mov     al, 1
0x506ECD: retn
