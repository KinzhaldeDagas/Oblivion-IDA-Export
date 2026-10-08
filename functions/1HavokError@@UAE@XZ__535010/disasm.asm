0x535010: push    0FFFFFFFFh
0x535012: push    offset ??1HavokError@@UAE@XZ_SEH
0x535017: mov     eax, large fs:0
0x53501D: push    eax
0x53501E: push    ecx
0x53501F: push    esi
0x535020: push    edi
0x535021: mov     eax, ds:0B30AACh
0x535026: xor     eax, esp
0x535028: push    eax
0x535029: lea     eax, [esp+1Ch+var_C]
0x53502D: mov     large fs:0, eax
0x535033: mov     esi, ecx
0x535035: mov     [esp+1Ch+var_10], esi
0x535039: mov     dword ptr [esi], offset ??_7HavokError@@6B@; const HavokError::`vftable'
0x53503F: lea     edi, [esi+8]
0x535042: push    edi
0x535043: mov     [esp+20h+var_4], 2
0x53504B: call    sub_534D30
0x535050: lea     ecx, [esi+14h]
0x535053: mov     byte ptr [esp+1Ch+var_4], 1
0x535058: call    sub_8B0E60
0x53505D: mov     eax, [edi+8]
0x535060: test    eax, eax
0x535062: mov     byte ptr [esp+1Ch+var_4], 0
0x535067: js      short loc_53509F
0x535069: mov     ecx, ds:0BA9DE4h
0x53506F: mov     edx, large fs:2Ch
0x535076: mov     ecx, [edx+ecx*4]
0x535079: mov     ecx, [ecx+19Ch]
0x53507F: test    ecx, ecx
0x535081: jnz     short loc_535089
0x535083: mov     ecx, ds:0BA7D9Ch
0x535089: mov     edx, [edi]
0x53508B: and     eax, 3FFFFFFFh
0x535090: add     eax, eax
0x535092: add     eax, eax
0x535094: push    14h
0x535096: add     eax, eax
0x535098: push    eax
0x535099: push    edx
0x53509A: call    sub_8A75D0
0x53509F: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x5350A5: mov     ecx, [esp+1Ch+var_C]
0x5350A9: mov     large fs:0, ecx
0x5350B0: pop     ecx
0x5350B1: pop     edi
0x5350B2: pop     esi
0x5350B3: add     esp, 10h
0x5350B6: retn
0x88AE60: mov     edx, ecx
0x88AE62: mov     eax, [edx+8]
0x88AE65: test    eax, eax
0x88AE67: js      short locret_88AEA1
0x88AE69: mov     ecx, ds:0BA9DE4h
0x88AE6F: push    esi
0x88AE70: mov     esi, large fs:2Ch
0x88AE77: mov     ecx, [esi+ecx*4]
0x88AE7A: mov     ecx, [ecx+19Ch]
0x88AE80: test    ecx, ecx
0x88AE82: pop     esi
0x88AE83: jnz     short loc_88AE8B
0x88AE85: mov     ecx, ds:0BA7D9Ch
0x88AE8B: mov     edx, [edx]
0x88AE8D: and     eax, 3FFFFFFFh
0x88AE92: add     eax, eax
0x88AE94: add     eax, eax
0x88AE96: push    14h
0x88AE98: add     eax, eax
0x88AE9A: push    eax
0x88AE9B: push    edx
0x88AE9C: call    sub_8A75D0
0x88AEA1: retn
0x9B91B0: mov     ecx, [ebp-10h]
0x9B91B3: jmp     sub_4BFC40
0x9B91B8: mov     ecx, [ebp-10h]
0x9B91BB: add     ecx, 8
0x9B91BE: jmp     loc_88AE60
0x9B91C3: mov     ecx, [ebp-10h]
0x9B91C6: add     ecx, 14h
0x9B91C9: jmp     sub_533D50
0x9B91CE: mov     edx, [esp+arg_4]
0x9B91D2: lea     eax, [edx-0Ch]
0x9B91D5: mov     ecx, [edx-10h]
0x9B91D8: xor     ecx, eax
0x9B91DA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B91DF: mov     eax, offset stru_AE35A0
0x9B91E4: jmp     ___CxxFrameHandler3
