0x76A1C0: sub     esp, 4C0h
0x76A1C6: mov     eax, ds:0B30AACh
0x76A1CB: xor     eax, esp
0x76A1CD: mov     [esp+4C0h+var_4], eax
0x76A1D4: mov     eax, [esp+4C0h+arg_0]
0x76A1DB: mov     edx, [esp+4C0h+arg_8]
0x76A1E2: push    ebx
0x76A1E3: mov     ebx, [esp+4C4h+arg_14]
0x76A1EA: push    ebp
0x76A1EB: mov     ebp, ecx
0x76A1ED: mov     ecx, [esp+4C8h+arg_4]
0x76A1F4: mov     [ebp+0A58h], eax
0x76A1FA: mov     eax, [esp+4C8h+arg_18]
0x76A201: mov     [ebp+0A5Ch], ecx
0x76A207: mov     ecx, [esp+4C8h+arg_1C]
0x76A20E: mov     [ebp+0A60h], edx
0x76A214: mov     edx, [esp+4C8h+arg_20]
0x76A21B: mov     [ebp+0A70h], eax
0x76A221: mov     eax, [esp+4C8h+arg_24]
0x76A228: mov     [ebp+0A74h], ecx
0x76A22E: mov     ecx, [esp+4C8h+arg_28]
0x76A235: push    esi
0x76A236: mov     esi, [esp+4CCh+arg_10]
0x76A23D: push    edi; MaxCount
0x76A23E: mov     edi, [esp+4D0h+arg_C]
0x76A245: mov     [ebp+0A78h], edx
0x76A24B: mov     edx, [esp+4D0h+arg_2C]
0x76A252: mov     [ebp+0A7Ch], eax
0x76A258: mov     eax, [esp+4D0h+arg_30]
0x76A25F: mov     [ebp+0A80h], ecx
0x76A265: mov     ecx, [esp+4D0h+arg_34]
0x76A26C: mov     [esp+4D0h+var_4B8], edi
0x76A270: mov     [ebp+0A64h], edi
0x76A276: mov     [ebp+0A68h], esi
0x76A27C: mov     [ebp+0A6Ch], ebx
0x76A282: mov     [ebp+0A84h], edx
0x76A288: mov     [ebp+0A88h], eax
0x76A28E: mov     [ebp+0A8Ch], ecx
0x76A294: call    sub_763DE0
0x76A299: mov     [ebp+5BCh], ebx
0x76A29F: mov     [ebp+3B8h], esi
0x76A2A5: lea     ebx, [ebp+5C4h]
0x76A2AB: push    ebx
0x76A2AC: mov     [ebp+3B4h], edi
0x76A2B2: mov     edi, [esp+4D4h+arg_18]
0x76A2B9: lea     esi, [ebp+5C0h]
0x76A2BF: push    esi
0x76A2C0: push    edi
0x76A2C1: call    sub_7623D0
0x76A2C6: add     esp, 0Ch
0x76A2C9: test    al, al
0x76A2CB: jnz     short loc_76A2F8
0x76A2CD: push    0FFh; Src
0x76A2D2: push    offset aCreationFail_0; "Creation failed: Invalid 3D device type"
0x76A2D7: push    100h; SizeInBytes
0x76A2DC: push    offset byte_B3F828; Dst
0x76A2E1: call    _strncpy_s
0x76A2E6: push    offset aNidx9rendererI; "NiDX9Renderer::Initialize> Invalid devi"...
0x76A2EB: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x76A2F0: add     esp, 14h
0x76A2F3: jmp     loc_76A615
0x76A2F8: mov     al, byte ptr [esp+4D0h+arg_8]
0x76A2FF: test    al, 40h
0x76A301: jz      short loc_76A306
0x76A303: or      dword ptr [ebx], 2
0x76A306: test    al, 20h
0x76A308: jz      short loc_76A30D
0x76A30A: or      dword ptr [ebx], 4
0x76A30D: mov     ecx, ds:0B42160h
0x76A313: movzx   edx, word ptr [ecx+0Eh]
0x76A317: mov     eax, [ebp+5BCh]
0x76A31D: cmp     eax, edx
0x76A31F: jnb     short loc_76A329
0x76A321: mov     ecx, [ecx+8]
0x76A324: mov     eax, [ecx+eax*4]
0x76A327: jmp     short loc_76A32B
0x76A329: xor     eax, eax
0x76A32B: test    eax, eax
0x76A32D: mov     [ebp+5CCh], eax
0x76A333: jnz     short loc_76A360
0x76A335: push    0FFh; Src
0x76A33A: push    offset aCreationFail_1; "Creation failed: Invalid Adapter"
0x76A33F: push    100h; SizeInBytes
0x76A344: push    offset byte_B3F828; Dst
0x76A349: call    _strncpy_s
0x76A34E: push    offset aNidx9rendere_4; "NiDX9Renderer::Initialize> Invalid Adap"...
0x76A353: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x76A358: add     esp, 14h
0x76A35B: jmp     loc_76A615
0x76A360: cmp     dword ptr [esi], 1
0x76A363: jnz     short loc_76A36D
0x76A365: mov     ecx, [eax+460h]
0x76A36B: jmp     short loc_76A373
0x76A36D: mov     ecx, [eax+464h]
0x76A373: mov     eax, [ecx+4]
0x76A376: neg     eax
0x76A378: sbb     eax, eax
0x76A37A: and     eax, ecx
0x76A37C: test    eax, eax
0x76A37E: mov     [ebp+5D0h], eax
0x76A384: jz      loc_76A2CD
0x76A38A: push    38h ; '8'
0x76A38C: lea     edx, [esp+4D4h+var_488]
0x76A390: push    0
0x76A392: push    edx
0x76A393: call    __memset
0x76A398: add     esp, 0Ch
0x76A39B: jmp     short loc_76A3A0
0x76A39D: align 10h
0x76A3A0: push    offset aNidx9rendere_5; "NiDX9Renderer::Initialize> Attempting t"...
0x76A3A5: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x76A3AA: mov     ecx, ds:0B42160h
0x76A3B0: movzx   edx, word ptr [ecx+0Eh]
0x76A3B4: mov     eax, [ebp+5BCh]
0x76A3BA: add     esp, 4
0x76A3BD: cmp     eax, edx
0x76A3BF: jnb     short loc_76A3C9
0x76A3C1: mov     ecx, [ecx+8]
0x76A3C4: mov     eax, [ecx+eax*4]
0x76A3C7: jmp     short loc_76A3CB
0x76A3C9: xor     eax, eax
0x76A3CB: cmp     dword ptr [esi], 1
0x76A3CE: jnz     short loc_76A3D8
0x76A3D0: mov     eax, [eax+460h]
0x76A3D6: jmp     short loc_76A3DE
0x76A3D8: mov     eax, [eax+464h]
0x76A3DE: cmp     dword ptr [eax+4], 0
0x76A3E2: jz      short loc_76A3E8
0x76A3E4: test    eax, eax
0x76A3E6: jnz     short loc_76A413
0x76A3E8: push    0FFh; Src
0x76A3ED: push    offset aCreationFail_2; "Creation failed: Requested device not v"...
0x76A3F2: push    100h; SizeInBytes
0x76A3F7: push    offset byte_B3F828; Dst
0x76A3FC: call    _strncpy_s
0x76A401: push    offset aNidx9rendere_6; "NiDX9Renderer::Initialize> No device of"...
0x76A406: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x76A40B: add     esp, 14h
0x76A40E: jmp     loc_76A5BF
0x76A413: mov     eax, [esp+4D0h+arg_24]
0x76A41A: mov     ecx, [esp+4D0h+arg_34]
0x76A421: lea     edx, [esp+4D0h+var_488]
0x76A425: push    edx
0x76A426: mov     edx, [esp+4D4h+arg_28]
0x76A42D: push    eax
0x76A42E: mov     eax, [esp+4D8h+arg_30]
0x76A435: push    ecx
0x76A436: mov     ecx, [esp+4DCh+arg_20]
0x76A43D: push    edx
0x76A43E: mov     edx, [esp+4E0h+arg_1C]
0x76A445: push    eax
0x76A446: mov     eax, [esp+4E4h+arg_2C]
0x76A44D: push    ecx
0x76A44E: mov     ecx, [esp+4E8h+arg_8]
0x76A455: push    edx
0x76A456: mov     edx, [esp+4ECh+arg_4]
0x76A45D: push    eax
0x76A45E: mov     eax, [esp+4F0h+arg_0]
0x76A465: push    ecx
0x76A466: mov     ecx, [ebp+3B4h]
0x76A46C: push    edx
0x76A46D: push    eax
0x76A46E: push    ecx
0x76A46F: mov     ecx, ebp
0x76A471: call    sub_761E60
0x76A476: test    al, al
0x76A478: jz      loc_76A5BF
0x76A47E: mov     eax, ds:0B42154h
0x76A483: mov     edx, [esp+4D0h+var_47C]
0x76A487: mov     byte ptr ds:0B420E6h, 0
0x76A48E: mov     ecx, [eax]
0x76A490: mov     [esp+4D0h+arg_30], edx
0x76A497: mov     edx, [ecx+10h]
0x76A49A: push    eax
0x76A49B: xor     ebx, ebx
0x76A49D: call    edx
0x76A49F: test    eax, eax
0x76A4A1: jbe     short loc_76A50C
0x76A4A3: jmp     short loc_76A4B0
0x76A4A5: align 10h
0x76A4B0: mov     eax, ds:0B42154h
0x76A4B5: mov     ecx, [eax]
0x76A4B7: lea     edx, [esp+4D0h+var_450]
0x76A4BE: push    edx
0x76A4BF: push    0
0x76A4C1: push    ebx
0x76A4C2: push    eax
0x76A4C3: mov     eax, [ecx+14h]
0x76A4C6: call    eax
0x76A4C8: mov     edi, offset aNvidiaNvperfhu; "NVIDIA NVPerfHUD"
0x76A4CD: lea     esi, [esp+4D0h+var_250]
0x76A4D4: mov     ecx, 11h
0x76A4D9: xor     edx, edx
0x76A4DB: repe cmpsb
0x76A4DD: jz      short loc_76A4F5
0x76A4DF: mov     eax, ds:0B42154h
0x76A4E4: mov     ecx, [eax]
0x76A4E6: mov     edx, [ecx+10h]
0x76A4E9: push    eax
0x76A4EA: add     ebx, 1
0x76A4ED: call    edx
0x76A4EF: cmp     ebx, eax
0x76A4F1: jb      short loc_76A4B0
0x76A4F3: jmp     short loc_76A50C
0x76A4F5: mov     [ebp+5BCh], ebx
0x76A4FB: mov     dword ptr [ebp+5C0h], 2
0x76A505: mov     byte ptr ds:0B420E6h, 1
0x76A50C: mov     eax, ds:0B42154h
0x76A511: mov     ecx, [eax]
0x76A513: lea     esi, [ebp+280h]
0x76A519: push    esi
0x76A51A: lea     edx, [esp+4D4h+var_488]
0x76A51E: push    edx
0x76A51F: mov     edx, [ebp+5C4h]
0x76A525: push    edx
0x76A526: mov     edx, [ebp+3B8h]
0x76A52C: lea     ebx, [ebp+5C4h]
0x76A532: push    edx
0x76A533: mov     edx, [ebp+5C0h]
0x76A539: push    edx
0x76A53A: mov     edx, [ebp+5BCh]
0x76A540: push    edx
0x76A541: push    eax
0x76A542: mov     eax, [ecx+40h]
0x76A545: call    eax
0x76A547: mov     edi, [esp+4D0h+var_488]
0x76A54B: mov     ecx, eax; void *
0x76A54D: imul    edi, 64h ; 'd'
0x76A550: mov     eax, [esp+4D0h+var_484]
0x76A554: imul    eax, 64h ; 'd'
0x76A557: xor     edx, edx
0x76A559: div     edi
0x76A55B: cmp     eax, 4Bh ; 'K'
0x76A55E: setnz   dl
0x76A561: test    ecx, ecx
0x76A563: mov     [ebp+0A90h], dl
0x76A569: jge     loc_76A632
0x76A56F: mov     eax, [esp+4D0h+arg_30]
0x76A576: cmp     eax, [esp+4D0h+var_47C]
0x76A57A: jz      short loc_76A5B8
0x76A57C: push    offset aNidx9render_12; "NiDX9Renderer::Initialize> Specified nu"...
0x76A581: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x76A586: mov     eax, ds:0B42154h
0x76A58B: mov     ecx, [eax]
0x76A58D: add     esp, 4
0x76A590: push    esi
0x76A591: lea     edx, [esp+4D4h+var_488]
0x76A595: push    edx
0x76A596: mov     edx, [ebx]
0x76A598: push    edx
0x76A599: mov     edx, [ebp+3B8h]
0x76A59F: push    edx
0x76A5A0: mov     edx, [ebp+5C0h]
0x76A5A6: push    edx
0x76A5A7: mov     edx, [ebp+5BCh]
0x76A5AD: push    edx
0x76A5AE: push    eax
0x76A5AF: mov     eax, [ecx+40h]
0x76A5B2: call    eax
0x76A5B4: test    eax, eax
0x76A5B6: jge     short loc_76A632
0x76A5B8: mov     edi, [esp+4D0h+arg_18]
0x76A5BF: cmp     edi, 4
0x76A5C2: jz      loc_76A92C
0x76A5C8: add     edi, 1
0x76A5CB: cmp     edi, 4
0x76A5CE: mov     [esp+4D0h+arg_18], edi
0x76A5D5: jz      loc_76A957
0x76A5DB: push    offset aNidx9render_13; "NiDX9Renderer::Initialize> Could not cr"...
0x76A5E0: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x76A5E5: push    ebx
0x76A5E6: lea     esi, [ebp+5C0h]
0x76A5EC: push    esi
0x76A5ED: push    edi
0x76A5EE: call    sub_7623D0
0x76A5F3: add     esp, 10h
0x76A5F6: test    al, al
0x76A5F8: jnz     loc_76A3A0
0x76A5FE: push    offset aCreationFail_0; "Creation failed: Invalid 3D device type"
0x76A603: call    sub_761A90
0x76A608: push    offset aNidx9rendererI; "NiDX9Renderer::Initialize> Invalid devi"...
0x76A60D: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x76A612: add     esp, 8
0x76A615: xor     al, al
0x76A617: mov     ecx, [esp+4D0h+var_4]
0x76A61E: pop     edi
0x76A61F: pop     esi
0x76A620: pop     ebp
0x76A621: pop     ebx
0x76A622: xor     ecx, esp
0x76A624: call    @__security_check_cookie@4; __security_check_cookie(x)
0x76A629: add     esp, 4C0h
0x76A62F: retn    38h ; '8'
0x76A632: cmp     dword ptr [ebp+280h], 0
0x76A639: jnz     short loc_76A663
0x76A63B: push    0FFh; Src
0x76A640: push    offset aCreationFail_6; "Creation failed: Could not create hardw"...
0x76A645: push    100h; SizeInBytes
0x76A64A: push    offset byte_B3F828; Dst
0x76A64F: call    _strncpy_s
0x76A654: push    offset aNidx9render_14; "NiDX9Renderer::Initialize> Could not cr"...
0x76A659: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x76A65E: add     esp, 14h
0x76A661: jmp     short loc_76A615
0x76A663: lea     ecx, [esp+4D0h+var_488]
0x76A667: push    ecx
0x76A668: mov     ecx, ebp
0x76A66A: call    sub_762110
0x76A66F: test    al, al
0x76A671: jz      short loc_76A615
0x76A673: mov     eax, [ebx]
0x76A675: mov     edx, eax
0x76A677: shr     eax, 7
0x76A67A: shr     edx, 6
0x76A67D: and     al, 1
0x76A67F: not     dl
0x76A681: mov     [ebp+5C9h], al
0x76A687: and     dl, 1
0x76A68A: lea     eax, [esp+4D0h+a2]
0x76A68E: push    eax; a3
0x76A68F: lea     ecx, [esp+4D4h+var_488]; this
0x76A693: mov     [ebp+5C8h], dl
0x76A699: mov     edx, [ebp+280h]
0x76A69F: push    ecx; Src
0x76A6A0: push    edx; a1
0x76A6A1: mov     [esp+4DCh+a2], 0
0x76A6A9: mov     [esp+4DCh+var_4C0], 0
0x76A6B1: call    ??0NiDX9ImplicitBufferData@@QAE@XZ; NiDX9ImplicitBufferData::NiDX9ImplicitBufferData(void)
0x76A6B6: mov     ecx, [ebp+280h]
0x76A6BC: mov     edi, eax
0x76A6BE: lea     eax, [esp+4DCh+var_4C0]
0x76A6C2: push    eax
0x76A6C3: push    ecx
0x76A6C4: call    NiDX9DepthStencilBufferData_Create
0x76A6C9: push    ebp; a2
0x76A6CA: push    1; maxTargets
0x76A6CC: call    CreateNewRenderTargetGroup
0x76A6D1: mov     ecx, [esp+4ECh+a2]
0x76A6D5: add     esp, 1Ch
0x76A6D8: mov     [ebp+878h], eax
0x76A6DE: mov     edx, [eax]
0x76A6E0: mov     edx, [edx+68h]
0x76A6E3: push    0; a4
0x76A6E5: push    ecx
0x76A6E6: mov     ecx, eax
0x76A6E8: call    edx
0x76A6EA: mov     ecx, [ebp+878h]
0x76A6F0: mov     eax, [ecx]
0x76A6F2: mov     edx, [esp+4D4h+var_4C4]
0x76A6F6: mov     eax, [eax+6Ch]
0x76A6F9: push    edx
0x76A6FA: call    eax
0x76A6FC: mov     eax, [ebp+878h]
0x76A702: test    eax, eax
0x76A704: push    ecx; a3
0x76A705: mov     ecx, esp
0x76A707: mov     [ecx], eax
0x76A709: jz      short loc_76A715
0x76A70B: add     eax, 4
0x76A70E: push    eax; lpAddend
0x76A70F: call    dword ptr ds:0A28078h
0x76A715: mov     ecx, [esp+4D8h+a2]
0x76A719: push    ecx; a2
0x76A71A: lea     ecx, [ebp+884h]; a1
0x76A720: call    sub_768980
0x76A725: mov     eax, [ebp+878h]
0x76A72B: mov     ecx, ebp; this
0x76A72D: mov     [ebp+87Ch], eax
0x76A733: mov     [ebp+880h], eax
0x76A739: call    sub_768C10
0x76A73E: test    al, al
0x76A740: jnz     short loc_76A754
0x76A742: push    offset aNidx9render_17; "NiDX9Renderer::Initialize> Could not in"...
0x76A747: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x76A74C: add     esp, 4
0x76A74F: jmp     loc_76A615
0x76A754: push    1; char
0x76A756: lea     edx, [ebp+284h]
0x76A75C: push    edx; Src
0x76A75D: push    ebp; int
0x76A75E: call    NiDX9RenderState_constr
0x76A763: push    ebp
0x76A764: mov     [ebp+8ACh], eax
0x76A76A: call    sub_778F60
0x76A76F: push    70h ; 'p'; Size
0x76A771: call    FormHeapAlloc
0x76A776: add     esp, 14h
0x76A779: test    eax, eax
0x76A77B: jz      short loc_76A786
0x76A77D: mov     ecx, eax; this
0x76A77F: call    ??0NiD3DShader@@QAE@XZ; NiD3DShader::NiD3DShader(void)
0x76A784: jmp     short loc_76A788
0x76A786: xor     eax, eax
0x76A788: lea     esi, [ebp+0A94h]
0x76A78E: push    eax; a2
0x76A78F: mov     ecx, esi; this
0x76A791: call    NiSmartPointer_Set??
0x76A796: mov     ecx, [esi]
0x76A798: mov     eax, [ecx]
0x76A79A: mov     edx, [eax+24h]
0x76A79D: push    ebp
0x76A79E: call    edx
0x76A7A0: push    100h; Size
0x76A7A5: call    FormHeapAlloc
0x76A7AA: add     esp, 4
0x76A7AD: test    eax, eax
0x76A7AF: jz      short loc_76A7C1
0x76A7B1: mov     ecx, [ebp+280h]
0x76A7B7: push    ecx
0x76A7B8: mov     ecx, eax; this
0x76A7BA: call    ??0NiDX9VertexBufferManager@@QAE@XZ; NiDX9VertexBufferManager::NiDX9VertexBufferManager(void)
0x76A7BF: jmp     short loc_76A7C3
0x76A7C1: xor     eax, eax
0x76A7C3: push    4Ch ; 'L'; Size
0x76A7C5: mov     [ebp+8B0h], eax
0x76A7CB: call    FormHeapAlloc
0x76A7D0: add     esp, 4
0x76A7D3: test    eax, eax
0x76A7D5: jz      short loc_76A7E7
0x76A7D7: mov     edx, [ebp+280h]
0x76A7DD: push    edx
0x76A7DE: mov     ecx, eax; this
0x76A7E0: call    ??0NiDX9IndexBufferManager@@QAE@XZ; NiDX9IndexBufferManager::NiDX9IndexBufferManager(void)
0x76A7E5: jmp     short loc_76A7E9
0x76A7E7: xor     eax, eax
0x76A7E9: push    10h; Size
0x76A7EB: mov     [ebp+8B4h], eax
0x76A7F1: call    FormHeapAlloc
0x76A7F6: add     esp, 4
0x76A7F9: test    eax, eax
0x76A7FB: jz      short loc_76A807
0x76A7FD: push    ebp
0x76A7FE: mov     ecx, eax
0x76A800: call    sub_77ABF0
0x76A805: jmp     short loc_76A809
0x76A807: xor     eax, eax
0x76A809: mov     ecx, [ebp+280h]; this
0x76A80F: mov     [ebp+8B8h], eax
0x76A815: mov     eax, [ebp+8B0h]
0x76A81B: push    eax
0x76A81C: push    ecx
0x76A81D: call    ??0NiD3DGeometryGroupManager@@QAE@XZ; NiD3DGeometryGroupManager::NiD3DGeometryGroupManager(void)
0x76A822: mov     edx, [ebp+0]
0x76A825: mov     [ebp+8A0h], eax
0x76A82B: mov     eax, [edx+54h]
0x76A82E: add     esp, 8
0x76A831: mov     ecx, ebp
0x76A833: call    eax
0x76A835: mov     ecx, [ebp+8A0h]
0x76A83B: shr     eax, 1
0x76A83D: and     eax, 0FFFFFF01h
0x76A842: push    eax
0x76A843: call    sub_778C80
0x76A848: mov     ecx, [ebp+8A0h]
0x76A84E: mov     edx, [ecx]
0x76A850: mov     eax, [edx+4]
0x76A853: push    1
0x76A855: call    eax
0x76A857: mov     ecx, [ebp+8A0h]
0x76A85D: mov     [ebp+8A4h], eax
0x76A863: mov     edx, [ecx]
0x76A865: mov     eax, [edx+4]
0x76A868: push    2
0x76A86A: call    eax
0x76A86C: push    240h; Size
0x76A871: mov     [ebp+8A8h], eax
0x76A877: call    FormHeapAlloc
0x76A87C: add     esp, 4
0x76A87F: test    eax, eax
0x76A881: jz      short loc_76A89A
0x76A883: mov     ecx, [ebp+280h]
0x76A889: mov     edx, [ebp+8ACh]
0x76A88F: push    ecx
0x76A890: push    edx
0x76A891: mov     ecx, eax
0x76A893: call    sub_7766E0
0x76A898: jmp     short loc_76A89C
0x76A89A: xor     eax, eax
0x76A89C: mov     [ebp+8BCh], eax
0x76A8A2: cmp     dword ptr [edi+24h], 0
0x76A8A6: jz      short loc_76A8B7
0x76A8A8: mov     ecx, [ebp+8ACh]
0x76A8AE: mov     eax, [ecx]
0x76A8B0: mov     edx, [eax+38h]
0x76A8B3: push    1
0x76A8B5: call    edx
0x76A8B7: push    0
0x76A8B9: lea     ecx, [esp+4D4h+var_4A4]
0x76A8BD: call    NiFrustum__SetOrtho
0x76A8C2: fld     dword ptr ds:0A30634h
0x76A8C8: mov     eax, [ebp+0]
0x76A8CB: fst     [esp+4D0h+var_498]
0x76A8CF: mov     eax, [eax+140h]
0x76A8D5: fstp    [esp+4D0h+var_4A4]
0x76A8D9: fld1
0x76A8DB: lea     ecx, [esp+4D0h+var_4B4]
0x76A8DF: fst     [esp+4D0h+var_49C]
0x76A8E3: push    ecx
0x76A8E4: fst     [esp+4D4h+var_4A0]
0x76A8E8: lea     edx, [esp+4D4h+var_4A4]
0x76A8EC: fld     dword ptr ds:0A2FAACh
0x76A8F2: push    edx
0x76A8F3: fstp    [esp+4D8h+var_494]
0x76A8F7: push    offset dword_B258E8
0x76A8FC: push    offset dword_B258DC
0x76A901: push    offset dword_B258D0
0x76A906: fst     [esp+4E4h+var_490]
0x76A90A: push    offset Vector3_InitValue?
0x76A90F: fldz
0x76A911: mov     ecx, ebp
0x76A913: fst     [esp+4E8h+var_4B4]
0x76A917: fstp    [esp+4E8h+var_4A8]
0x76A91B: fst     [esp+4E8h+var_4B0]
0x76A91F: fstp    [esp+4E8h+var_4AC]
0x76A923: call    eax
0x76A925: mov     al, 1
0x76A927: jmp     loc_76A617
0x76A92C: push    0FFh; Src
0x76A931: push    offset aCreationFail_9; "Creation failed: Could not create refer"...
0x76A936: push    100h; SizeInBytes
0x76A93B: push    offset byte_B3F828; Dst
0x76A940: call    _strncpy_s
0x76A945: push    offset aNidx9render_18; "NiDX9Renderer::Initialize> Could not cr"...
0x76A94A: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x76A94F: add     esp, 14h
0x76A952: jmp     loc_76A615
0x76A957: push    offset aNidx9render_19; "NiDX9Renderer::Initialize> Could not cr"...
0x76A95C: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x76A961: add     esp, 4
0x76A964: jmp     loc_76A615
