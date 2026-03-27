0x5EB150: push    ebp
0x5EB151: mov     ebp, esp
0x5EB153: and     esp, 0FFFFFFC0h
0x5EB156: sub     esp, 34h
0x5EB159: push    ebx
0x5EB15A: push    esi
0x5EB15B: push    edi
0x5EB15C: mov     ebx, ecx
0x5EB15E: call    TESObjectREFR_GetParentCell
0x5EB163: mov     esi, eax
0x5EB165: test    esi, esi
0x5EB167: jz      loc_5EB360
0x5EB16D: mov     al, [esi+26h]
0x5EB170: cmp     al, 6
0x5EB172: jz      short loc_5EB17C
0x5EB174: cmp     al, 5
0x5EB176: jnz     loc_5EB360
0x5EB17C: mov     edi, [ebp+a2]
0x5EB17F: fld     dword ptr [edi]
0x5EB181: sub     esp, 8
0x5EB184: fstp    [esp+48h+X]; X
0x5EB187: mov     [esp+48h+var_21], 0
0x5EB18C: call    __finite
0x5EB191: add     esp, 8
0x5EB194: test    eax, eax
0x5EB196: jz      loc_5EB34E
0x5EB19C: fld     dword ptr [edi+4]
0x5EB19F: sub     esp, 8
0x5EB1A2: fstp    [esp+48h+X]; X
0x5EB1A5: call    __finite
0x5EB1AA: add     esp, 8
0x5EB1AD: test    eax, eax
0x5EB1AF: jz      loc_5EB34E
0x5EB1B5: fld     dword ptr [edi+8]
0x5EB1B8: sub     esp, 8
0x5EB1BB: fstp    [esp+48h+X]; X
0x5EB1BE: call    __finite
0x5EB1C3: add     esp, 8
0x5EB1C6: test    eax, eax
0x5EB1C8: jz      loc_5EB34E
0x5EB1CE: fld     dword ptr [edi]
0x5EB1D0: sub     esp, 8
0x5EB1D3: fstp    [esp+48h+X]; X
0x5EB1D6: call    __isnan
0x5EB1DB: add     esp, 8
0x5EB1DE: test    eax, eax
0x5EB1E0: jnz     loc_5EB34E
0x5EB1E6: fld     dword ptr [edi+4]
0x5EB1E9: sub     esp, 8
0x5EB1EC: fstp    [esp+48h+X]; X
0x5EB1EF: call    __isnan
0x5EB1F4: add     esp, 8
0x5EB1F7: test    eax, eax
0x5EB1F9: jnz     loc_5EB34E
0x5EB1FF: fld     dword ptr [edi+8]
0x5EB202: sub     esp, 8
0x5EB205: fstp    [esp+48h+X]; X
0x5EB208: call    __isnan
0x5EB20D: add     esp, 8
0x5EB210: test    eax, eax
0x5EB212: jnz     loc_5EB34E
0x5EB218: mov     ecx, ebx; this
0x5EB21A: call    TESObjectREFR_GetParentCell
0x5EB21F: mov     ecx, eax; this
0x5EB221: call    TESObjectCELL_IsInterior
0x5EB226: test    al, al
0x5EB228: jz      loc_5EB2C7
0x5EB22E: push    2
0x5EB230: push    0
0x5EB232: mov     ecx, esi
0x5EB234: call    sub_441800
0x5EB239: test    eax, eax
0x5EB23B: jz      loc_5EB300
0x5EB241: mov     ecx, [eax+20h]
0x5EB244: mov     edx, [eax+24h]
0x5EB247: mov     esi, [eax+28h]
0x5EB24A: mov     eax, [eax+2Ch]
0x5EB24D: mov     [esp+40h+var_10], ecx
0x5EB251: mov     [esp+40h+var_1C], ecx
0x5EB255: push    offset Vector3_InitValue?
0x5EB25A: lea     ecx, [esp+44h+var_1C]
0x5EB25E: mov     [esp+44h+var_C], edx
0x5EB262: mov     [esp+44h+var_8], esi
0x5EB266: mov     [esp+44h+var_4], eax
0x5EB26A: mov     [esp+44h+var_18], edx
0x5EB26E: mov     [esp+44h+var_14], esi
0x5EB272: call    sub_8AA390
0x5EB277: test    al, al
0x5EB279: jz      loc_5EB300
0x5EB27F: fld     [esp+40h+var_10]
0x5EB283: lea     ecx, [esp+40h+var_1C]
0x5EB287: fsub    dword ptr [edi]
0x5EB289: fstp    [esp+40h+var_1C]
0x5EB28D: fld     [esp+40h+var_C]
0x5EB291: fsub    dword ptr [edi+4]
0x5EB294: fstp    [esp+40h+var_18]
0x5EB298: fld     [esp+40h+var_8]
0x5EB29C: fsub    dword ptr [edi+8]
0x5EB29F: fstp    [esp+40h+var_14]
0x5EB2A3: call    sub_404C90
0x5EB2A8: fld     [esp+40h+var_4]
0x5EB2AC: fcompp
0x5EB2AE: fnstsw  ax
0x5EB2B0: test    ah, 5
0x5EB2B3: jp      short loc_5EB300
0x5EB2B5: mov     [esp+40h+var_21], 1
0x5EB2BA: mov     al, [esp+40h+var_21]
0x5EB2BE: pop     edi
0x5EB2BF: pop     esi
0x5EB2C0: pop     ebx
0x5EB2C1: mov     esp, ebp
0x5EB2C3: pop     ebp
0x5EB2C4: retn    8
0x5EB2C7: fldz
0x5EB2C9: lea     ecx, [esp+40h+a3]
0x5EB2CD: push    ecx; a3
0x5EB2CE: fstp    [esp+44h+a3]
0x5EB2D2: mov     ecx, ds:0B333A0h; this
0x5EB2D8: push    edi; a2
0x5EB2D9: call    GetTerrainHeight
0x5EB2DE: test    al, al
0x5EB2E0: jz      short loc_5EB300
0x5EB2E2: fld     dword ptr [edi+8]
0x5EB2E5: fld     [esp+40h+a3]
0x5EB2E9: fsub    qword ptr ds:0A3F3E8h
0x5EB2EF: fstp    [esp+40h+a3]
0x5EB2F3: fld     [esp+40h+a3]
0x5EB2F7: fcompp
0x5EB2F9: fnstsw  ax
0x5EB2FB: test    ah, 41h
0x5EB2FE: jz      short loc_5EB34E
0x5EB300: cmp     [ebp+arg_4], 0
0x5EB304: jz      short loc_5EB353
0x5EB306: mov     edx, ds:0B33B00h
0x5EB30C: mov     eax, [edx+18h]
0x5EB30F: shr     eax, 0Bh
0x5EB312: test    al, 1
0x5EB314: jnz     short loc_5EB353
0x5EB316: mov     ecx, ebx; this
0x5EB318: call    MobileObject_GetCharProxy
0x5EB31D: mov     esi, eax
0x5EB31F: test    esi, esi
0x5EB321: jz      short loc_5EB353
0x5EB323: mov     ecx, [esi+1F4h]
0x5EB329: shr     ecx, 0Bh
0x5EB32C: test    cl, 1
0x5EB32F: jnz     short loc_5EB353
0x5EB331: push    1
0x5EB333: push    0
0x5EB335: push    0
0x5EB337: push    edi
0x5EB338: mov     ecx, esi
0x5EB33A: call    sub_8949C0
0x5EB33F: test    al, al
0x5EB341: jz      short loc_5EB34E
0x5EB343: mov     ecx, esi
0x5EB345: call    sub_895F00
0x5EB34A: test    al, al
0x5EB34C: jz      short loc_5EB353
0x5EB34E: mov     [esp+40h+var_21], 1
0x5EB353: mov     al, [esp+40h+var_21]
0x5EB357: pop     edi
0x5EB358: pop     esi
0x5EB359: pop     ebx
0x5EB35A: mov     esp, ebp
0x5EB35C: pop     ebp
0x5EB35D: retn    8
0x5EB360: pop     edi
0x5EB361: pop     esi
0x5EB362: xor     al, al
0x5EB364: pop     ebx
0x5EB365: mov     esp, ebp
0x5EB367: pop     ebp
0x5EB368: retn    8
