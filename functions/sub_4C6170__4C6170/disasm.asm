0x4C6170: push    0FFFFFFFFh
0x4C6172: push    offset SEH_4C6170
0x4C6177: mov     eax, large fs:0
0x4C617D: push    eax
0x4C617E: sub     esp, 8
0x4C6181: push    ebx
0x4C6182: push    esi
0x4C6183: push    edi
0x4C6184: mov     eax, ds:0B30AACh
0x4C6189: xor     eax, esp
0x4C618B: push    eax
0x4C618C: lea     eax, [esp+24h+var_C]
0x4C6190: mov     large fs:0, eax
0x4C6196: mov     esi, ecx
0x4C6198: mov     [esp+24h+var_14], esi
0x4C619C: xor     edi, edi
0x4C619E: mov     [esi+14h], edi
0x4C61A1: push    offset ??1?$NiTPointerMap@IPAPAVTESGrassAreaParam@@@@UAE@XZ; a5
0x4C61A6: push    offset sub_4C4B90; a4
0x4C61AB: push    4; size
0x4C61AD: push    10h; a2
0x4C61AF: lea     eax, [esi+54h]
0x4C61B2: push    eax; a1
0x4C61B3: mov     [esp+38h+var_4], edi
0x4C61B7: call    ArrayConstructor
0x4C61BC: mov     [esi+94h], edi
0x4C61C2: mov     [esi], edi
0x4C61C4: mov     [esi+4], edi
0x4C61C7: mov     [esi+8], edi
0x4C61CA: mov     [esi+0Ch], edi
0x4C61CD: mov     [esi+10h], edi
0x4C61D0: mov     ebx, [esi+14h]
0x4C61D3: cmp     ebx, edi
0x4C61D5: mov     byte ptr [esp+24h+var_4], 2
0x4C61DA: jz      short loc_4C61FB
0x4C61DC: lea     ecx, [ebx+4]
0x4C61DF: push    ecx; lpAddend
0x4C61E0: call    dword ptr ds:0A2807Ch
0x4C61E6: test    eax, eax
0x4C61E8: jnz     short loc_4C61F8
0x4C61EA: cmp     ebx, edi
0x4C61EC: jz      short loc_4C61F8
0x4C61EE: mov     edx, [ebx]
0x4C61F0: mov     eax, [edx]
0x4C61F2: push    1
0x4C61F4: mov     ecx, ebx
0x4C61F6: call    eax
0x4C61F8: mov     [esi+14h], edi
0x4C61FB: fld     dword ptr ds:0A32048h
0x4C6201: fstp    [esp+24h+var_14]
0x4C6205: mov     ecx, [esp+24h+var_14]
0x4C6209: fld     dword ptr ds:0A3B888h
0x4C620F: mov     [esi+18h], ecx
0x4C6212: fstp    [esp+24h+var_10]
0x4C6216: mov     edx, [esp+24h+var_10]
0x4C621A: mov     [esi+1Ch], edx
0x4C621D: mov     eax, ds:0B35BE4h
0x4C6222: mov     [esi+20h], eax
0x4C6225: mov     ecx, ds:0B35BE4h
0x4C622B: mov     [esi+24h], ecx
0x4C622E: mov     edx, ds:0B35BE4h
0x4C6234: mov     [esi+28h], edx
0x4C6237: mov     eax, ds:0B35BE4h
0x4C623C: mov     [esi+2Ch], eax
0x4C623F: xor     eax, eax
0x4C6241: mov     [esi+30h], eax
0x4C6244: mov     [esi+34h], eax
0x4C6247: mov     [esi+38h], eax
0x4C624A: mov     [esi+3Ch], eax
0x4C624D: mov     [esi+40h], eax
0x4C6250: mov     [esi+44h], eax
0x4C6253: mov     [esi+48h], eax
0x4C6256: mov     [esi+4Ch], eax
0x4C6259: mov     [esi+50h], edi
0x4C625C: mov     eax, esi
0x4C625E: mov     ecx, dword ptr [esp+24h+var_C]
0x4C6262: mov     large fs:0, ecx
0x4C6269: pop     ecx
0x4C626A: pop     edi
0x4C626B: pop     esi
0x4C626C: pop     ebx
0x4C626D: add     esp, 14h
0x4C6270: retn
0x9B4AD0: mov     ecx, [ebp-14h]
0x9B4AD3: add     ecx, 14h; slot
0x9B4AD6: jmp     NiPointerSlot_Release
0x9B4ADB: push    offset ??1?$NiTPointerMap@IPAPAVTESGrassAreaParam@@@@UAE@XZ; void (__thiscall *)(void *)
0x9B4AE0: push    4; int
0x9B4AE2: push    10h; unsigned int
0x9B4AE4: mov     eax, [ebp-14h]
0x9B4AE7: add     eax, 54h ; 'T'
0x9B4AEA: push    eax; void *
0x9B4AEB: call    $LN21
0x9B4AF0: retn
0x9B4AF1: mov     ecx, [ebp-14h]
0x9B4AF4: add     ecx, 94h ; '”'; slot
0x9B4AFA: jmp     NiPointerSlot_Release
0x9B4AFF: mov     edx, [esp+arg_4]
0x9B4B03: lea     eax, [edx-14h]
0x9B4B06: mov     ecx, [edx-18h]
0x9B4B09: xor     ecx, eax
0x9B4B0B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B4B10: mov     eax, offset stru_ADFF20
0x9B4B15: jmp     ___CxxFrameHandler3
