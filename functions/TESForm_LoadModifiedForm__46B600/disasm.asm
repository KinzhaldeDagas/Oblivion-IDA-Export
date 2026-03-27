0x46B600: test    byte ptr [esp+Dst], 1
0x46B605: push    esi
0x46B606: mov     esi, ecx
0x46B608: jz      short loc_46B65B
0x46B60A: mov     ecx, ds:0B33B00h
0x46B610: push    4; Size
0x46B612: lea     eax, [esp+8+Dst]
0x46B616: push    eax; Dst
0x46B617: call    SaveLoad_LoadData
0x46B61C: push    0; int
0x46B61E: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x46B623: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46B628: push    0; int
0x46B62A: push    esi; void *
0x46B62B: call    OblivionDynamicCast
0x46B630: add     esp, 14h
0x46B633: test    eax, eax
0x46B635: jz      short loc_46B64B
0x46B637: mov     ecx, [esi+8]
0x46B63A: xor     ecx, [esp+4+Dst]
0x46B63E: and     ecx, 112860h
0x46B644: xor     [esi+8], ecx
0x46B647: pop     esi
0x46B648: retn    8
0x46B64B: mov     edx, [esi+8]
0x46B64E: xor     edx, [esp+4+Dst]
0x46B652: and     edx, 0C20h
0x46B658: xor     [esi+8], edx
0x46B65B: pop     esi
0x46B65C: retn    8
