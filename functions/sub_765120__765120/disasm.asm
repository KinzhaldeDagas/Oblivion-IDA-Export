0x765120: sub     esp, 24h
0x765123: push    ebx
0x765124: xor     ebx, ebx
0x765126: cmp     [ecx+6F0h], bl
0x76512C: mov     [esp+28h+var_24], ecx
0x765130: jz      short loc_76513B
0x765132: xor     al, al
0x765134: pop     ebx
0x765135: add     esp, 24h
0x765138: retn    14h
0x76513B: mov     ecx, [esp+28h+arg_4]; void *
0x76513F: mov     edx, [ecx+10h]
0x765142: push    ebp
0x765143: mov     ebp, [esp+2Ch+arg_0]
0x765147: mov     eax, [ebp+10h]
0x76514A: cmp     eax, ebx
0x76514C: jz      loc_765272
0x765152: cmp     edx, ebx
0x765154: jz      loc_765272
0x76515A: push    esi
0x76515B: mov     esi, [eax+0Ch]
0x76515E: cmp     esi, ebx
0x765160: push    edi
0x765161: mov     edi, [edx+0Ch]
0x765164: jz      loc_765254
0x76516A: cmp     edi, ebx
0x76516C: jz      loc_765254
0x765172: mov     eax, [esp+34h+arg_8]
0x765176: cmp     eax, ebx
0x765178: jz      short loc_765193
0x76517A: mov     edx, [eax]
0x76517C: mov     [esp+34h+var_10], edx
0x765180: mov     edx, [eax+4]
0x765183: mov     [esp+34h+var_8], edx
0x765187: mov     edx, [eax+8]
0x76518A: mov     eax, [eax+0Ch]
0x76518D: mov     [esp+34h+var_C], edx
0x765191: jmp     short loc_7651A5
0x765193: mov     edx, [ebp+8]
0x765196: mov     eax, [ebp+0Ch]
0x765199: mov     [esp+34h+var_10], ebx
0x76519D: mov     [esp+34h+var_8], edx
0x7651A1: mov     [esp+34h+var_C], ebx
0x7651A5: mov     [esp+34h+var_4], eax
0x7651A9: mov     eax, [esp+34h+arg_C]
0x7651AD: cmp     eax, ebx
0x7651AF: jz      short loc_7651CE
0x7651B1: mov     ecx, [eax]
0x7651B3: mov     edx, [eax+4]
0x7651B6: mov     [esp+34h+var_20], ecx
0x7651BA: mov     ecx, [eax+8]
0x7651BD: mov     [esp+34h+var_18], edx
0x7651C1: mov     edx, [eax+0Ch]
0x7651C4: mov     [esp+34h+var_1C], ecx
0x7651C8: mov     [esp+34h+var_14], edx
0x7651CC: jmp     short loc_7651E4
0x7651CE: mov     eax, [ecx+8]
0x7651D1: mov     ecx, [ecx+0Ch]
0x7651D4: mov     [esp+34h+var_20], ebx
0x7651D8: mov     [esp+34h+var_18], eax
0x7651DC: mov     [esp+34h+var_1C], ebx
0x7651E0: mov     [esp+34h+var_14], ecx
0x7651E4: mov     eax, [esp+34h+arg_10]
0x7651E8: sub     eax, 1
0x7651EB: jz      short loc_7651FD
0x7651ED: sub     eax, 1
0x7651F0: jz      short loc_7651F6
0x7651F2: xor     edx, edx
0x7651F4: jmp     short loc_765202
0x7651F6: mov     edx, 2
0x7651FB: jmp     short loc_765202
0x7651FD: mov     edx, 1
0x765202: mov     eax, [esp+34h+var_24]
0x765206: mov     eax, [eax+280h]
0x76520C: mov     ecx, [eax]
0x76520E: push    edx
0x76520F: lea     edx, [esp+38h+var_20]
0x765213: push    edx
0x765214: push    edi
0x765215: lea     edx, [esp+40h+var_10]
0x765219: push    edx
0x76521A: push    esi
0x76521B: push    eax
0x76521C: mov     eax, [ecx+88h]
0x765222: call    eax
0x765224: cmp     eax, ebx
0x765226: jge     short loc_765248
0x765228: push    eax
0x765229: call    sub_7736F0
0x76522E: push    eax
0x76522F: push    offset aNidx9render_23; "NiDX9Renderer::Copy> Failed StretchRect"...
0x765234: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x765239: add     esp, 0Ch
0x76523C: pop     edi
0x76523D: pop     esi
0x76523E: pop     ebp
0x76523F: xor     al, al
0x765241: pop     ebx
0x765242: add     esp, 24h
0x765245: retn    14h
0x765248: pop     edi
0x765249: pop     esi
0x76524A: pop     ebp
0x76524B: mov     al, 1
0x76524D: pop     ebx
0x76524E: add     esp, 24h
0x765251: retn    14h
0x765254: push    offset aNullSurfaceFou; "NULL Surface found"
0x765259: push    offset aNidx9render_24; "NiDX9Renderer::Copy> Failed - %s"
0x76525E: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x765263: add     esp, 8
0x765266: pop     edi
0x765267: pop     esi
0x765268: pop     ebp
0x765269: xor     al, al
0x76526B: pop     ebx
0x76526C: add     esp, 24h
0x76526F: retn    14h
0x765272: push    offset aNoRendererdata; "No RendererData found"
0x765277: push    offset aNidx9render_24; "NiDX9Renderer::Copy> Failed - %s"
0x76527C: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x765281: add     esp, 8
0x765284: pop     ebp
0x765285: xor     al, al
0x765287: pop     ebx
0x765288: add     esp, 24h
0x76528B: retn    14h
