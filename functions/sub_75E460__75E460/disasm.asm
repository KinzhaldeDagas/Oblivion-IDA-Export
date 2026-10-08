0x75E460: push    esi
0x75E461: push    edi
0x75E462: mov     edi, [esp+8+arg_0]
0x75E466: push    edi
0x75E467: mov     esi, ecx
0x75E469: call    NiSingleInterpController_LoadBinary; Loads NiTimeController state. For stream versions >= 0x0A010068, reads and smart-assigns the serialized interpolator reference at +0x3C; older formats leave concrete controllers to migrate legacy data.
0x75E46E: add     esi, 40h ; '@'
0x75E471: push    esi
0x75E472: mov     ecx, edi
0x75E474: call    sub_713620
0x75E479: pop     edi
0x75E47A: pop     esi
0x75E47B: retn    4
