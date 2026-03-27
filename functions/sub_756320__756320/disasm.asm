0x756320: push    esi
0x756321: push    edi
0x756322: push    100h; Size
0x756327: mov     edi, ecx
0x756329: call    FormHeapAlloc
0x75632E: add     esp, 4
0x756331: test    eax, eax
0x756333: jz      short loc_756396
0x756335: mov     ecx, ds:0B258DCh
0x75633B: fld1
0x75633D: sub     esp, 0Ch
0x756340: mov     edx, esp
0x756342: mov     [edx], ecx
0x756344: mov     ecx, ds:0B258E0h
0x75634A: mov     [edx+4], ecx
0x75634D: mov     ecx, ds:0B258E4h
0x756353: mov     [edx+8], ecx
0x756356: mov     ecx, ds:0B258D0h
0x75635C: sub     esp, 0Ch
0x75635F: mov     edx, esp
0x756361: mov     [edx], ecx
0x756363: mov     ecx, ds:0B258D4h
0x756369: mov     [edx+4], ecx
0x75636C: mov     ecx, ds:0B258D8h
0x756372: sub     esp, 8
0x756375: mov     [edx+8], ecx
0x756378: fst     [esp+28h+var_24]; float
0x75637C: fst     [esp+28h+var_28]; float
0x75637F: push    0; int
0x756381: push    0; int
0x756383: push    0; char
0x756385: push    0; char
0x756387: push    ecx
0x756388: mov     ecx, eax
0x75638A: fstp    [esp+3Ch+var_3C]; float
0x75638D: call    sub_7561F0
0x756392: mov     esi, eax
0x756394: jmp     short loc_756398
0x756396: xor     esi, esi
0x756398: mov     edx, [esp+8+arg_0]
0x75639C: push    edx
0x75639D: push    esi
0x75639E: mov     ecx, edi
0x7563A0: call    sub_75ED50
0x7563A5: fld     dword ptr [edi+30h]
0x7563A8: fstp    dword ptr [esi+30h]
0x7563AB: fld     dword ptr [edi+34h]
0x7563AE: fstp    dword ptr [esi+34h]
0x7563B1: mov     eax, [edi+38h]
0x7563B4: mov     [esi+38h], eax
0x7563B7: mov     ecx, [edi+3Ch]
0x7563BA: mov     [esi+3Ch], ecx
0x7563BD: mov     edx, [edi+40h]
0x7563C0: lea     eax, [edi+44h]
0x7563C3: mov     [esi+40h], edx
0x7563C6: mov     ecx, [eax]
0x7563C8: mov     [esi+44h], ecx
0x7563CB: mov     edx, [eax+4]
0x7563CE: mov     [esi+48h], edx
0x7563D1: mov     eax, [eax+8]
0x7563D4: mov     [esi+4Ch], eax
0x7563D7: pop     edi
0x7563D8: mov     eax, esi
0x7563DA: pop     esi
0x7563DB: retn    4
