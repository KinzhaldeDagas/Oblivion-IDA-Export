0x7792E0: sub     esp, 8
0x7792E3: push    ebx
0x7792E4: push    esi
0x7792E5: push    edi
0x7792E6: push    64h ; 'd'; Size
0x7792E8: call    FormHeapAlloc
0x7792ED: mov     ebx, [esp+18h+a2]
0x7792F1: mov     esi, eax
0x7792F3: xor     edi, edi
0x7792F5: add     esp, 4
0x7792F8: cmp     esi, edi
0x7792FA: jz      short loc_779314
0x7792FC: mov     eax, [esp+14h+a3]
0x779300: push    eax; a3
0x779301: push    ebx; a2
0x779302: mov     ecx, esi; this
0x779304: call    sub_7616A0
0x779309: mov     dword ptr [esi], offset ??_7NiDX9RenderedCubeMapData@@6B@; const NiDX9RenderedCubeMapData::`vftable'
0x77930F: mov     [esi+60h], edi
0x779312: jmp     short loc_779316
0x779314: xor     esi, esi
0x779316: push    ebx
0x779317: mov     ecx, esi
0x779319: mov     [esi+60h], edi
0x77931C: call    sub_779210
0x779321: cmp     eax, edi
0x779323: mov     [esp+14h+var_4], eax
0x779327: jnz     short loc_77933C
0x779329: mov     edx, [esi]
0x77932B: mov     eax, [edx]
0x77932D: push    1
0x77932F: mov     ecx, esi
0x779331: call    eax
0x779333: pop     edi
0x779334: pop     esi
0x779335: xor     eax, eax
0x779337: pop     ebx
0x779338: add     esp, 8
0x77933B: retn
0x77933C: mov     ecx, [esi+4]
0x77933F: push    ebp
0x779340: xor     ebp, ebp
0x779342: mov     [ecx+24h], esi
0x779345: add     ebx, 44h ; 'D'
0x779348: mov     edx, [esi]
0x77934A: mov     eax, [edx+14h]
0x77934D: mov     ecx, esi
0x77934F: call    eax
0x779351: mov     ecx, [ebx]
0x779353: mov     edx, [esp+18h+a3]
0x779357: mov     eax, [edx+280h]
0x77935D: mov     edx, [esi]
0x77935F: mov     [esp+18h+a5], ecx
0x779363: lea     ecx, [esp+18h+a5]
0x779367: push    ecx; a5
0x779368: push    eax; a4
0x779369: mov     eax, [edx+14h]
0x77936C: push    ebp; a3
0x77936D: push    edi; a2
0x77936E: mov     ecx, esi
0x779370: call    eax
0x779372: push    eax; toUnkD3D
0x779373: call    ??0NiDX9TextureBufferData@@QAE@XZ; NiDX9TextureBufferData::NiDX9TextureBufferData(void)
0x779378: add     esp, 14h
0x77937B: test    eax, eax
0x77937D: jz      short loc_7793EB
0x77937F: test    ebp, ebp
0x779381: jnz     short loc_779385
0x779383: mov     ebp, eax
0x779385: add     edi, 1
0x779388: add     ebx, 4
0x77938B: cmp     edi, 6
0x77938E: jb      short loc_779348
0x779390: mov     edx, [esi]
0x779392: mov     eax, [edx+8]
0x779395: mov     ecx, esi
0x779397: call    eax
0x779399: mov     edx, [esi]
0x77939B: mov     edi, eax
0x77939D: mov     eax, [edx+4]
0x7793A0: mov     ecx, esi
0x7793A2: call    eax
0x7793A4: imul    edi, eax
0x7793A7: mov     ecx, [esp+18h+var_4]
0x7793AB: movzx   eax, byte ptr [ecx+1]
0x7793AF: shr     eax, 3
0x7793B2: imul    eax, edi
0x7793B5: lea     eax, [eax+eax*2]
0x7793B8: add     eax, eax
0x7793BA: add     ds:0B42860h, eax
0x7793C0: add     [esi+60h], eax
0x7793C3: mov     ecx, eax
0x7793C5: and     ecx, 0FFFFF000h
0x7793CB: xor     edx, edx
0x7793CD: cmp     ecx, eax
0x7793CF: jz      short loc_7793DB
0x7793D1: sub     ecx, eax
0x7793D3: add     ecx, 1000h
0x7793D9: mov     edx, ecx
0x7793DB: add     ds:0B42864h, edx
0x7793E1: pop     ebp
0x7793E2: pop     edi
0x7793E3: mov     eax, esi
0x7793E5: pop     esi
0x7793E6: pop     ebx
0x7793E7: add     esp, 8
0x7793EA: retn
0x7793EB: push    offset EmptyString
0x7793F0: push    offset aNidx9render_27; "NiDX9RenderedCubeMapData::Create> NiDX9"...
0x7793F5: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7793FA: mov     edx, [esi]
0x7793FC: mov     eax, [edx]
0x7793FE: add     esp, 8
0x779401: push    1
0x779403: mov     ecx, esi
0x779405: call    eax
0x779407: pop     ebp
0x779408: pop     edi
0x779409: pop     esi
0x77940A: xor     eax, eax
0x77940C: pop     ebx
0x77940D: add     esp, 8
0x779410: retn
