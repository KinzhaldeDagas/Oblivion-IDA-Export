0x68B4F0: sub     esp, 0Ch
0x68B4F3: push    ebx
0x68B4F4: push    ebp
0x68B4F5: mov     ebp, [esp+14h+arg_0]
0x68B4F9: xor     bl, bl
0x68B4FB: test    ebp, ebp
0x68B4FD: push    edi
0x68B4FE: mov     edi, ecx
0x68B500: jz      loc_68B633
0x68B506: call    sub_68A110
0x68B50B: test    al, al
0x68B50D: jz      loc_68B633
0x68B513: fld     dword ptr ds:0B3A460h
0x68B519: mov     ecx, edi
0x68B51B: fstp    [esp+18h+arg_0]
0x68B51F: call    sub_68A160
0x68B524: mov     ecx, ds:0B333A0h
0x68B52A: push    eax
0x68B52B: call    sub_43F840
0x68B530: test    al, al
0x68B532: jnz     short loc_68B557
0x68B534: mov     eax, [ebp+0]
0x68B537: mov     edx, [eax+174h]
0x68B53D: mov     ecx, ebp
0x68B53F: call    edx
0x68B541: mov     ecx, ds:0B333A0h
0x68B547: push    eax
0x68B548: call    sub_43F840
0x68B54D: test    al, al
0x68B54F: jz      short loc_68B557
0x68B551: fldz
0x68B553: fstp    [esp+18h+arg_0]
0x68B557: fld     [esp+18h+arg_0]
0x68B55B: push    ecx
0x68B55C: mov     ecx, edi
0x68B55E: fstp    [esp+1Ch+var_1C]; float
0x68B561: call    sub_68A160
0x68B566: push    eax; int
0x68B567: mov     eax, [ebp+0]
0x68B56A: mov     edx, [eax+174h]
0x68B570: mov     ecx, ebp
0x68B572: call    edx
0x68B574: push    eax; int
0x68B575: call    sub_480520
0x68B57A: add     esp, 0Ch
0x68B57D: test    eax, eax
0x68B57F: jge     loc_68B633
0x68B585: fld     dword ptr ds:0A32048h
0x68B58B: push    esi
0x68B58C: fstp    [esp+1Ch+var_C]
0x68B590: lea     esi, [edi+14h]
0x68B593: fldz
0x68B595: mov     ecx, esi
0x68B597: fst     [esp+1Ch+var_8]
0x68B59B: mov     bl, 1
0x68B59D: fstp    [esp+1Ch+var_4]
0x68B5A1: call    sub_42B410
0x68B5A6: test    eax, eax
0x68B5A8: jz      short loc_68B5C5
0x68B5AA: mov     ecx, eax
0x68B5AC: call    sub_6899C0
0x68B5B1: mov     ecx, [eax]
0x68B5B3: mov     [esp+1Ch+var_C], ecx
0x68B5B7: mov     edx, [eax+4]
0x68B5BA: mov     [esp+1Ch+var_8], edx
0x68B5BE: mov     eax, [eax+8]
0x68B5C1: mov     [esp+1Ch+var_4], eax
0x68B5C5: push    ebp
0x68B5C6: mov     ecx, edi
0x68B5C8: call    sub_68ABA0
0x68B5CD: fld     [esp+1Ch+var_C]
0x68B5D1: fcomp   qword ptr ds:0A3A5B0h
0x68B5D7: fnstsw  ax
0x68B5D9: test    ah, 44h
0x68B5DC: jnp     short loc_68B5F0
0x68B5DE: push    5
0x68B5E0: lea     ecx, [esp+20h+var_C]
0x68B5E4: push    ecx
0x68B5E5: mov     ecx, esi
0x68B5E7: call    sub_68BE10
0x68B5EC: test    al, al
0x68B5EE: jnz     short loc_68B627
0x68B5F0: mov     ecx, esi
0x68B5F2: call    sub_42B410
0x68B5F7: mov     edi, eax
0x68B5F9: test    edi, edi
0x68B5FB: jz      short loc_68B627
0x68B5FD: mov     edx, [ebp+0]
0x68B600: mov     eax, [edx+174h]
0x68B606: mov     ecx, ebp
0x68B608: call    eax
0x68B60A: push    eax
0x68B60B: mov     ecx, edi
0x68B60D: call    sub_6899C0
0x68B612: mov     ecx, eax
0x68B614: call    sub_8AA350
0x68B619: test    al, al
0x68B61B: jz      short loc_68B627
0x68B61D: push    0
0x68B61F: push    edi
0x68B620: mov     ecx, esi
0x68B622: call    sub_68BE80
0x68B627: pop     esi
0x68B628: pop     edi
0x68B629: pop     ebp
0x68B62A: mov     al, bl
0x68B62C: pop     ebx
0x68B62D: add     esp, 0Ch
0x68B630: retn    4
0x68B633: pop     edi
0x68B634: pop     ebp
0x68B635: mov     al, bl
0x68B637: pop     ebx
0x68B638: add     esp, 0Ch
0x68B63B: retn    4
