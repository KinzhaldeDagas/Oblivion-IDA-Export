0x754450: push    esi
0x754451: push    edi
0x754452: mov     edi, [esp+8+arg_0]
0x754456: push    edi
0x754457: mov     esi, ecx
0x754459: call    sub_75E920
0x75445E: mov     eax, [edi+21Ch]
0x754464: mov     edx, [eax+4]
0x754467: push    1
0x754469: lea     ecx, [esp+0Ch+arg_0]
0x75446D: push    ecx
0x75446E: push    4
0x754470: lea     edi, [esi+30h]
0x754473: push    edi
0x754474: push    eax
0x754475: mov     [esp+1Ch+arg_0], 4
0x75447D: call    edx
0x75447F: fld     dword ptr [edi]
0x754481: fcomp   qword ptr ds:0A68FE0h
0x754487: add     esp, 14h
0x75448A: fnstsw  ax
0x75448C: test    ah, 5
0x75448F: jp      short loc_75449F
0x754491: fld     dword ptr ds:0A5A04Ch
0x754497: pop     edi
0x754498: fstp    dword ptr [esi+34h]
0x75449B: pop     esi
0x75449C: retn    4
0x75449F: fld     dword ptr [edi]
0x7544A1: pop     edi
0x7544A2: fld1
0x7544A4: fdivrp  st(1), st
0x7544A6: fstp    dword ptr [esi+34h]
0x7544A9: pop     esi
0x7544AA: retn    4
