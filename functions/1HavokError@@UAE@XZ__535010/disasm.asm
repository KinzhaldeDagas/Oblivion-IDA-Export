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
