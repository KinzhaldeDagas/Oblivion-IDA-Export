0x95D540: sub     esp, 18h
0x95D543: push    esi
0x95D544: mov     esi, [esp+1Ch+arg_C]
0x95D548: test    esi, esi
0x95D54A: jnz     short loc_95D553
0x95D54C: xor     al, al
0x95D54E: pop     esi
0x95D54F: add     esp, 18h
0x95D552: retn
0x95D553: mov     eax, [esp+1Ch+arg_8]
0x95D557: cmp     byte ptr [eax+11h], 0
0x95D55B: jz      short loc_95D563
0x95D55D: test    byte ptr [esi+18h], 1
0x95D561: jnz     short loc_95D54C
0x95D563: mov     edx, [esi]
0x95D565: mov     eax, [edx+8]
0x95D568: push    ebx
0x95D569: mov     ecx, esi
0x95D56B: call    eax
0x95D56D: mov     ebx, eax
0x95D56F: test    ebx, ebx
0x95D571: jz      short loc_95D586
0x95D573: mov     cl, [ebx+18h]
0x95D576: shr     cl, 6
0x95D579: test    cl, 1
0x95D57C: jz      short loc_95D586
0x95D57E: pop     ebx
0x95D57F: xor     al, al
0x95D581: pop     esi
0x95D582: add     esp, 18h
0x95D585: retn
0x95D586: push    ebp
0x95D587: mov     ebp, [esp+24h+arg_0]
0x95D58B: push    edi
0x95D58C: mov     edi, [esp+28h+arg_4]
0x95D590: push    edi
0x95D591: push    ebp
0x95D592: push    esi
0x95D593: call    sub_96E4C0
0x95D598: add     esp, 0Ch
0x95D59B: test    al, al
0x95D59D: jz      loc_95D6AD
0x95D5A3: test    ebx, ebx
0x95D5A5: jz      short loc_95D5BF
0x95D5A7: mov     edx, [esp+28h+arg_8]
0x95D5AB: push    esi
0x95D5AC: push    edx
0x95D5AD: push    edi
0x95D5AE: push    ebp
0x95D5AF: call    sub_95D730
0x95D5B4: add     esp, 10h
0x95D5B7: pop     edi
0x95D5B8: pop     ebp
0x95D5B9: pop     ebx
0x95D5BA: pop     esi
0x95D5BB: add     esp, 18h
0x95D5BE: retn
0x95D5BF: mov     eax, [esi]
0x95D5C1: mov     edx, [eax+10h]
0x95D5C4: mov     ecx, esi
0x95D5C6: call    edx
0x95D5C8: test    eax, eax
0x95D5CA: jz      short loc_95D5E4
0x95D5CC: mov     eax, [esp+28h+arg_8]
0x95D5D0: push    esi
0x95D5D1: push    eax
0x95D5D2: push    edi
0x95D5D3: push    ebp
0x95D5D4: call    sub_95C530
0x95D5D9: add     esp, 10h
0x95D5DC: pop     edi
0x95D5DD: pop     ebp
0x95D5DE: pop     ebx
0x95D5DF: pop     esi
0x95D5E0: add     esp, 18h
0x95D5E3: retn
0x95D5E4: cmp     byte ptr ds:0BA9A6Ch, 0
0x95D5EB: jz      loc_95D6AD
0x95D5F1: push    esi
0x95D5F2: push    offset dword_B4021C
0x95D5F7: call    NiRTTI__IsObjectOfRTTIType
0x95D5FC: add     esp, 8
0x95D5FF: test    al, al
0x95D601: jz      loc_95D6AD
0x95D607: push    ebp
0x95D608: lea     ecx, [esp+2Ch+var_18]
0x95D60C: push    ecx
0x95D60D: lea     ecx, [esi+88h]
0x95D613: call    sub_4121A0
0x95D618: lea     edx, [esp+28h+var_18]
0x95D61C: push    edx
0x95D61D: mov     ecx, edi
0x95D61F: call    sub_47D9E0
0x95D624: fcomp   dword ptr ds:0A2FAA8h
0x95D62A: fnstsw  ax
0x95D62C: test    ah, 5
0x95D62F: jnp     short loc_95D6AD
0x95D631: push    44h ; 'D'; Size
0x95D633: call    FormHeapAlloc
0x95D638: add     esp, 4
0x95D63B: test    eax, eax
0x95D63D: jz      short loc_95D64B
0x95D63F: push    esi
0x95D640: mov     ecx, eax
0x95D642: call    sub_95A2D0
0x95D647: mov     esi, eax
0x95D649: jmp     short loc_95D64D
0x95D64B: xor     esi, esi
0x95D64D: mov     ebx, [esp+28h+arg_8]
0x95D651: push    esi
0x95D652: mov     ecx, ebx
0x95D654: call    sub_95A360
0x95D659: lea     ecx, [esp+28h+var_18]
0x95D65D: call    sub_404C90
0x95D662: fstp    [esp+28h+arg_C]
0x95D666: fld     [esp+28h+arg_C]
0x95D66A: fst     dword ptr [esi+14h]
0x95D66D: cmp     dword ptr [ebx+8], 1
0x95D671: jnz     short loc_95D6AB
0x95D673: push    ecx
0x95D674: lea     eax, [esp+2Ch+var_18]
0x95D678: fstp    [esp+2Ch+var_2C]; float
0x95D67B: push    eax; int
0x95D67C: mov     ecx, edi
0x95D67E: call    sub_4707B0
0x95D683: push    eax
0x95D684: lea     ecx, [esp+2Ch+var_C]
0x95D688: push    ecx
0x95D689: mov     ecx, ebp
0x95D68B: call    sub_47D9B0
0x95D690: mov     edx, [eax]
0x95D692: mov     [esi+8], edx
0x95D695: mov     ecx, [eax+4]
0x95D698: pop     edi
0x95D699: mov     [esi+0Ch], ecx
0x95D69C: mov     edx, [eax+8]
0x95D69F: pop     ebp
0x95D6A0: pop     ebx
0x95D6A1: mov     [esi+10h], edx
0x95D6A4: xor     al, al
0x95D6A6: pop     esi
0x95D6A7: add     esp, 18h
0x95D6AA: retn
0x95D6AB: fstp    st
0x95D6AD: pop     edi
0x95D6AE: pop     ebp
0x95D6AF: pop     ebx
0x95D6B0: xor     al, al
0x95D6B2: pop     esi
0x95D6B3: add     esp, 18h
0x95D6B6: retn
