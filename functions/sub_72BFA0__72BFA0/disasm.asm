0x72BFA0: push    0FFFFFFFFh
0x72BFA2: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x72BFA7: mov     eax, large fs:0
0x72BFAD: push    eax
0x72BFAE: push    ecx
0x72BFAF: push    ebx
0x72BFB0: push    ebp
0x72BFB1: push    esi
0x72BFB2: push    edi
0x72BFB3: mov     eax, ds:0B30AACh
0x72BFB8: xor     eax, esp
0x72BFBA: push    eax
0x72BFBB: lea     eax, [esp+24h+var_C]
0x72BFBF: mov     large fs:0, eax
0x72BFC5: mov     ebp, ecx
0x72BFC7: mov     ebx, [esp+24h+arg_0]
0x72BFCB: push    ebx
0x72BFCC: call    sub_72BCA0
0x72BFD1: test    al, al
0x72BFD3: jnz     short loc_72BFDC
0x72BFD5: mov     eax, ebp
0x72BFD7: jmp     loc_72C0B6
0x72BFDC: push    2Ch ; ','; Size
0x72BFDE: call    FormHeapAlloc
0x72BFE3: mov     esi, eax
0x72BFE5: add     esp, 4
0x72BFE8: mov     [esp+24h+var_10], esi
0x72BFEC: xor     edi, edi
0x72BFEE: cmp     esi, edi
0x72BFF0: mov     [esp+24h+var_4], edi
0x72BFF4: jz      short loc_72C024
0x72BFF6: mov     ecx, esi
0x72BFF8: call    NiObject_constr
0x72BFFD: mov     dword ptr [esi], offset ??_7NiSkinInstance@@6B@; const NiSkinInstance::`vftable'
0x72C003: mov     [esi+8], edi
0x72C006: mov     [esi+0Ch], edi
0x72C009: mov     [esi+10h], edi
0x72C00C: mov     [esi+14h], edi
0x72C00F: mov     dword ptr [esi+18h], 0FFFFFFFFh
0x72C016: mov     [esi+1Ch], edi
0x72C019: mov     [esi+20h], edi
0x72C01C: mov     [esi+24h], edi
0x72C01F: mov     [esi+28h], edi
0x72C022: jmp     short loc_72C026
0x72C024: xor     esi, esi
0x72C026: push    ebx
0x72C027: push    esi
0x72C028: mov     ecx, ebp
0x72C02A: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x72C032: call    sub_72BC00
0x72C037: mov     ecx, [ebp+10h]
0x72C03A: lea     eax, [esp+24h+var_10]
0x72C03E: push    eax
0x72C03F: push    ecx
0x72C040: mov     ecx, [ebx]
0x72C042: call    NiTMap_GetAt
0x72C047: test    al, al
0x72C049: mov     eax, [esp+24h+var_10]
0x72C04D: jnz     short loc_72C052
0x72C04F: mov     eax, [ebp+10h]
0x72C052: mov     [esi+10h], eax
0x72C055: mov     edx, [ebp+8]
0x72C058: mov     ebx, [edx+40h]
0x72C05B: xor     ecx, ecx
0x72C05D: mov     eax, ebx
0x72C05F: mov     edx, 4
0x72C064: mul     edx
0x72C066: seto    cl
0x72C069: neg     ecx
0x72C06B: or      ecx, eax
0x72C06D: push    ecx; Size
0x72C06E: call    FormHeapAlloc
0x72C073: add     esp, 4
0x72C076: cmp     ebx, edi
0x72C078: mov     [esi+14h], eax
0x72C07B: jbe     short loc_72C0B4
0x72C07D: lea     ecx, [ecx+0]
0x72C080: mov     ecx, [ebp+14h]
0x72C083: mov     edx, [ecx+edi*4]
0x72C086: lea     eax, [esp+24h+var_10]
0x72C08A: push    eax
0x72C08B: mov     eax, [esp+28h+arg_0]
0x72C08F: mov     ecx, [eax]
0x72C091: push    edx
0x72C092: call    NiTMap_GetAt
0x72C097: test    al, al
0x72C099: jz      short loc_72C0A1
0x72C09B: mov     eax, [esp+24h+var_10]
0x72C09F: jmp     short loc_72C0A7
0x72C0A1: mov     ecx, [ebp+14h]
0x72C0A4: mov     eax, [ecx+edi*4]
0x72C0A7: mov     edx, [esi+14h]
0x72C0AA: mov     [edx+edi*4], eax
0x72C0AD: add     edi, 1
0x72C0B0: cmp     edi, ebx
0x72C0B2: jb      short loc_72C080
0x72C0B4: mov     eax, esi
0x72C0B6: mov     ecx, [esp+24h+var_C]
0x72C0BA: mov     large fs:0, ecx
0x72C0C1: pop     ecx
0x72C0C2: pop     edi
0x72C0C3: pop     esi
0x72C0C4: pop     ebp
0x72C0C5: pop     ebx
0x72C0C6: add     esp, 10h
0x72C0C9: retn    4
