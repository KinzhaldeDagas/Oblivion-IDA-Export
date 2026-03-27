0x813300: push    0FFFFFFFFh
0x813302: push    offset SEH_813300
0x813307: mov     eax, large fs:0
0x81330D: push    eax
0x81330E: sub     esp, 0BCh
0x813314: push    ebx
0x813315: push    ebp
0x813316: push    esi
0x813317: push    edi
0x813318: mov     eax, ds:0B30AACh
0x81331D: xor     eax, esp
0x81331F: push    eax
0x813320: lea     eax, [esp+0DCh+var_C]
0x813327: mov     large fs:0, eax
0x81332D: mov     edi, ecx
0x81332F: cmp     [esp+0DCh+arg_0], 0
0x813337: jz      loc_8134F2
0x81333D: fld     dword ptr [edi+6Ch]
0x813340: mov     ebp, ds:0B43104h
0x813346: fstp    [esp+0DCh+var_C8]
0x81334A: mov     eax, 1
0x81334F: cmp     [ebp+200h], eax
0x813355: fld     dword ptr [edi+78h]
0x813358: fstp    [esp+0DCh+var_C4]
0x81335C: fld     dword ptr [edi+84h]
0x813362: fstp    [esp+0DCh+var_C0]
0x813366: fld     dword ptr [edi+68h]
0x813369: fstp    [esp+0DCh+var_BC]
0x81336D: fld     dword ptr [edi+74h]
0x813370: fstp    [esp+0DCh+var_B8]
0x813374: fld     dword ptr [edi+80h]
0x81337A: fstp    [esp+0DCh+var_B4]
0x81337E: fld     dword ptr [edi+64h]
0x813381: fstp    [esp+0DCh+var_B0]
0x813385: fld     dword ptr [edi+70h]
0x813388: fstp    [esp+0DCh+var_AC]
0x81338C: fld     dword ptr [edi+7Ch]
0x81338F: fstp    [esp+0DCh+var_A8]
0x813393: jz      short loc_81339D
0x813395: cmp     [ebp+204h], eax
0x81339B: jnz     short loc_8133D6
0x81339D: cmp     [ebp+20Ch], al
0x8133A3: jnz     short loc_8133D6
0x8133A5: mov     eax, [ebp+0]
0x8133A8: mov     eax, [eax+140h]
0x8133AE: lea     ecx, [edi+110h]
0x8133B4: push    ecx
0x8133B5: lea     edx, [edi+0ECh]
0x8133BB: push    edx
0x8133BC: lea     ecx, [esp+0E4h+var_C8]
0x8133C0: push    ecx
0x8133C1: lea     edx, [esp+0E8h+var_BC]
0x8133C5: push    edx
0x8133C6: lea     ecx, [esp+0ECh+var_B0]
0x8133CA: push    ecx
0x8133CB: lea     edx, [edi+88h]
0x8133D1: push    edx
0x8133D2: mov     ecx, ebp
0x8133D4: call    eax
0x8133D6: call    InitBSShaderAccumulator
0x8133DB: mov     esi, eax
0x8133DD: test    esi, esi
0x8133DF: mov     [esp+0DCh+var_A0], esi
0x8133E3: jz      short loc_8133EF
0x8133E5: lea     ecx, [esi+4]
0x8133E8: push    ecx; lpAddend
0x8133E9: call    dword ptr ds:0A28078h
0x8133EF: mov     ebx, [ebp+8]
0x8133F2: test    ebx, ebx
0x8133F4: mov     [esp+0DCh+var_4], 0
0x8133FF: mov     [esp+0DCh+var_A4], ebx
0x813403: jz      short loc_81340F
0x813405: lea     edx, [ebx+4]
0x813408: push    edx; lpAddend
0x813409: call    dword ptr ds:0A28078h
0x81340F: push    esi; a2
0x813410: mov     ecx, ebp; this
0x813412: mov     byte ptr [esp+0E0h+var_4], 1
0x81341A: call    NiDX9Renderer__SetShaderAccumulator
0x81341F: mov     eax, [esi]
0x813421: mov     edx, [eax+4Ch]
0x813424: push    edi
0x813425: mov     ecx, esi
0x813427: call    edx
0x813429: push    0
0x81342B: lea     ecx, [esp+0E0h+var_9C]
0x81342F: mov     byte ptr [esi+21E0h], 1
0x813436: call    NiCullingProcess_NiCullingProcess
0x81343B: fldz
0x81343D: push    1; a3
0x81343F: push    ecx
0x813440: mov     ecx, edi; this
0x813442: fstp    [esp+0E4h+a2]; a2
0x813445: mov     byte ptr [esp+0E4h+var_4], 2
0x81344D: call    NiAVObject_UpdateNiAVObject
0x813452: mov     [esp+0DCh+var_9C.Camera], edi
0x813456: add     edi, 0ECh ; 'ì'
0x81345C: push    edi; a2
0x81345D: lea     ecx, [esp+0E0h+var_9C]; this
0x813461: call    NiCullingProcess__SetFrustum
0x813466: mov     ecx, [esp+0DCh+arg_0]
0x81346D: lea     eax, [esp+0DCh+var_9C]
0x813471: push    eax
0x813472: call    sub_7D2070
0x813477: mov     byte ptr [esi+21E1h], 1
0x81347E: mov     edx, [esi]
0x813480: mov     eax, [edx+50h]
0x813483: mov     ecx, esi
0x813485: call    eax
0x813487: push    ebx; a2
0x813488: mov     ecx, ebp; this
0x81348A: call    NiDX9Renderer__SetShaderAccumulator
0x81348F: cmp     dword ptr [esi+4], 2
0x813493: lea     edi, [esi+4]
0x813496: jnb     short loc_81349F
0x813498: push    edi; lpAddend
0x813499: call    dword ptr ds:0A28078h
0x81349F: lea     ecx, [esp+0DCh+var_9C]; this
0x8134A3: mov     byte ptr [esp+0DCh+var_4], 1
0x8134AB: call    ??1BSCullingProcess@@UAE@XZ; BSCullingProcess::~BSCullingProcess(void)
0x8134B0: test    ebx, ebx
0x8134B2: mov     ebp, ds:0A2807Ch
0x8134B8: mov     byte ptr [esp+0DCh+var_4], 0
0x8134C0: jz      short loc_8134D6
0x8134C2: lea     ecx, [ebx+4]
0x8134C5: push    ecx; lpAddend
0x8134C6: call    ebp ; InterlockedDecrement
0x8134C8: test    eax, eax
0x8134CA: jnz     short loc_8134D6
0x8134CC: mov     edx, [ebx]
0x8134CE: mov     eax, [edx]
0x8134D0: push    1
0x8134D2: mov     ecx, ebx
0x8134D4: call    eax
0x8134D6: push    edi; lpAddend
0x8134D7: mov     [esp+0E0h+var_4], 0FFFFFFFFh
0x8134E2: call    ebp ; InterlockedDecrement
0x8134E4: test    eax, eax
0x8134E6: jnz     short loc_8134F2
0x8134E8: mov     edx, [esi]
0x8134EA: mov     eax, [edx]
0x8134EC: push    1
0x8134EE: mov     ecx, esi
0x8134F0: call    eax
0x8134F2: mov     ecx, dword ptr [esp+0DCh+var_C]
0x8134F9: mov     large fs:0, ecx
0x813500: pop     ecx
0x813501: pop     edi
0x813502: pop     esi
0x813503: pop     ebp
0x813504: pop     ebx
0x813505: add     esp, 0C8h
0x81350B: retn    4
