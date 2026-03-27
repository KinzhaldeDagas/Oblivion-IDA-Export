0x88C440: sub     esp, 104h
0x88C446: mov     eax, ds:0B30AACh
0x88C44B: xor     eax, esp
0x88C44D: mov     [esp+104h+var_4], eax
0x88C454: push    ebx
0x88C455: xor     bl, bl
0x88C457: cmp     ds:0BA790Ah, bl
0x88C45D: push    esi
0x88C45E: mov     esi, ecx
0x88C460: jnz     loc_88C50F
0x88C466: mov     ecx, ds:0BA7924h
0x88C46C: cmp     ecx, ds:0B2E2F4h
0x88C472: jbe     short loc_88C4E7
0x88C474: mov     eax, ds:0BA7934h
0x88C479: test    eax, eax
0x88C47B: jz      short loc_88C4A6
0x88C47D: mov     edx, ds:0BA792Ch
0x88C483: push    eax
0x88C484: mov     eax, ds:0BA7930h
0x88C489: push    eax
0x88C48A: mov     eax, ds:0BA7928h
0x88C48F: push    edx
0x88C490: push    eax
0x88C491: push    ecx
0x88C492: lea     ecx, [esp+120h+Caption]
0x88C496: push    offset aDHavokPicksDPa; "%d Havok picks (%d path, %d LOS, %d Vie"...
0x88C49B: push    ecx
0x88C49C: call    __sprintf
0x88C4A1: add     esp, 1Ch
0x88C4A4: jmp     short loc_88C4CD
0x88C4A6: mov     edx, ds:0BA7930h
0x88C4AC: mov     eax, ds:0BA792Ch
0x88C4B1: push    edx
0x88C4B2: mov     edx, ds:0BA7928h
0x88C4B8: push    eax
0x88C4B9: push    edx
0x88C4BA: push    ecx
0x88C4BB: lea     eax, [esp+11Ch+Caption]
0x88C4BF: push    offset aDHavokPicksD_0; "%d Havok picks (%d path, %d LOS, %d Vie"...
0x88C4C4: push    eax
0x88C4C5: call    __sprintf
0x88C4CA: add     esp, 18h
0x88C4CD: mov     eax, ds:0B27E60h
0x88C4D2: test    eax, eax
0x88C4D4: jz      short loc_88C4E7
0x88C4D6: push    0
0x88C4D8: lea     ecx, [esp+110h+Caption]
0x88C4DC: push    ecx; lpCaption
0x88C4DD: push    offset Text; "WARNING"
0x88C4E2: call    eax ; sub_7485D0
0x88C4E4: add     esp, 0Ch
0x88C4E7: mov     dword ptr ds:0BA7924h, 0
0x88C4F1: mov     dword ptr ds:0BA7928h, 0
0x88C4FB: mov     dword ptr ds:0BA792Ch, 0
0x88C505: mov     dword ptr ds:0BA7930h, 0
0x88C50F: cmp     dword ptr [esi+2Ch], 0
0x88C513: jbe     short loc_88C525
0x88C515: push    0
0x88C517: mov     ecx, esi
0x88C519: call    sub_889F20
0x88C51E: mov     ecx, esi
0x88C520: call    sub_88A120
0x88C525: cmp     byte ptr [esi+19h], 0
0x88C529: jz      loc_88C5D2
0x88C52F: push    edi
0x88C530: mov     edi, ds:0BA7914h
0x88C536: test    edi, edi
0x88C538: jz      loc_88C5D1
0x88C53E: mov     ebx, 9
0x88C543: sub     edi, 1
0x88C546: cmp     dword ptr [esi+10h], 0
0x88C54A: jz      short loc_88C57F
0x88C54C: mov     edx, [esi]
0x88C54E: mov     eax, [edx+58h]
0x88C551: mov     ecx, esi
0x88C553: call    eax
0x88C555: cmp     [eax+0B4h], ebx
0x88C55B: jnz     short loc_88C57F
0x88C55D: fld     dword ptr ds:0BA790Ch
0x88C563: mov     ecx, [esi+10h]
0x88C566: sub     esp, 8
0x88C569: fst     [esp+118h+var_114]
0x88C56D: fstp    [esp+118h+var_118]
0x88C570: call    sub_8BAB10
0x88C575: mov     ecx, [esi+10h]
0x88C578: call    sub_8BAB60
0x88C57D: jmp     short loc_88C599
0x88C57F: mov     edx, [esi]
0x88C581: fld     dword ptr ds:0BA790Ch
0x88C587: mov     eax, [edx+58h]
0x88C58A: push    ecx
0x88C58B: mov     ecx, esi
0x88C58D: fstp    [esp+114h+var_114]
0x88C590: call    eax
0x88C592: mov     ecx, eax
0x88C594: call    sub_898B70
0x88C599: test    edi, edi
0x88C59B: jnz     short loc_88C543
0x88C59D: fld     dword ptr ds:0B2E2E0h
0x88C5A3: push    ecx
0x88C5A4: mov     ecx, esi
0x88C5A6: fstp    [esp+114h+var_114]; float
0x88C5A9: call    sub_88A660
0x88C5AE: cmp     [esi+14h], edi
0x88C5B1: jz      short loc_88C5C8
0x88C5B3: mov     ecx, [esi+14h]
0x88C5B6: fldz
0x88C5B8: mov     edx, [ecx]
0x88C5BA: mov     eax, [edx+8]
0x88C5BD: push    ecx
0x88C5BE: fstp    [esp+114h+var_114]
0x88C5C1: call    eax
0x88C5C3: call    sub_8BA9F0
0x88C5C8: mov     ecx, esi
0x88C5CA: call    sub_88A790
0x88C5CF: mov     bl, 1
0x88C5D1: pop     edi
0x88C5D2: cmp     dword ptr [esi+4Ch], 0
0x88C5D6: jbe     short loc_88C5DF
0x88C5D8: mov     ecx, esi
0x88C5DA: call    sub_88A280
0x88C5DF: mov     ecx, [esp+10Ch+var_4]
0x88C5E6: pop     esi
0x88C5E7: mov     al, bl
0x88C5E9: pop     ebx
0x88C5EA: xor     ecx, esp
0x88C5EC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x88C5F1: add     esp, 104h
0x88C5F7: retn
