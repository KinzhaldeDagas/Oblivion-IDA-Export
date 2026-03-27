0x4980D0: push    ecx
0x4980D1: mov     eax, ds:0B34FC4h
0x4980D6: push    ebx
0x4980D7: push    ebp
0x4980D8: xor     ebp, ebp
0x4980DA: xor     bl, bl
0x4980DC: cmp     eax, ebp
0x4980DE: jnz     short loc_4980F2
0x4980E0: call    sub_763DE0
0x4980E5: cmp     eax, ebp
0x4980E7: mov     ds:0B34FC4h, eax
0x4980EC: jz      loc_49830A
0x4980F2: cmp     eax, ebp
0x4980F4: push    esi
0x4980F5: mov     esi, ds:0B06C54h
0x4980FB: jnz     short loc_49810B
0x4980FD: call    sub_763DE0
0x498102: cmp     eax, ebp
0x498104: mov     ds:0B34FC4h, eax
0x498109: jz      short loc_498123
0x49810B: cmp     esi, [eax]
0x49810D: jnb     short loc_498123
0x49810F: movzx   ecx, word ptr [eax+0Eh]
0x498113: cmp     esi, ecx
0x498115: jnb     short loc_498123
0x498117: mov     edx, [eax+8]
0x49811A: mov     eax, [edx+esi*4]
0x49811D: mov     [esp+10h+var_4], eax
0x498121: jmp     short loc_498127
0x498123: mov     [esp+10h+var_4], ebp
0x498127: mov     ecx, [esp+10h+var_4]
0x49812B: cmp     ecx, ebp
0x49812D: jz      loc_4982DC
0x498133: cmp     byte ptr ds:0B06C74h, 0
0x49813A: jnz     short loc_49817F
0x49813C: mov     eax, [ecx+460h]
0x498142: cmp     [eax+4], ebp
0x498145: jz      short loc_49814B
0x498147: cmp     eax, ebp
0x498149: jnz     short loc_498161
0x49814B: push    offset aWindowedModeNo; "Windowed mode not supported on this Ada"...
0x498150: xor     bl, bl
0x498152: call    sub_497B20
0x498157: add     esp, 4
0x49815A: pop     esi
0x49815B: pop     ebp
0x49815C: mov     al, bl
0x49815E: pop     ebx
0x49815F: pop     ecx
0x498160: retn
0x498161: mov     bl, [eax+144h]
0x498167: test    bl, bl
0x498169: jnz     short loc_49817F
0x49816B: push    offset aWindowedModeNo; "Windowed mode not supported on this Ada"...
0x498170: call    sub_497B20
0x498175: add     esp, 4
0x498178: pop     esi
0x498179: pop     ebp
0x49817A: mov     al, bl
0x49817C: pop     ebx
0x49817D: pop     ecx
0x49817E: retn
0x49817F: push    edi
0x498180: movzx   edi, word ptr [ecx+45Ah]
0x498187: xor     bl, bl
0x498189: cmp     edi, ebp
0x49818B: jz      short loc_4981F1
0x49818D: mov     ecx, [ecx+454h]
0x498193: lea     ebp, [ecx+edi*4]
0x498196: mov     esi, [ebp-4]
0x498199: sub     ebp, 4
0x49819C: sub     edi, 1
0x49819F: xor     al, al
0x4981A1: test    esi, esi
0x4981A3: jz      short loc_4981E7
0x4981A5: cmp     [esp+14h+arg_0], al
0x4981A9: jz      short loc_4981C7
0x4981AB: cmp     ds:0B06C74h, al
0x4981B1: jz      short loc_4981C7
0x4981B3: mov     edx, ds:0B06C4Ch
0x4981B9: cmp     edx, [esi]
0x4981BB: jnz     short loc_4981E5
0x4981BD: mov     eax, ds:0B06C50h
0x4981C2: cmp     eax, [esi+4]
0x4981C5: jnz     short loc_4981E5
0x4981C7: cmp     dword ptr [esi+8], 20h ; ' '
0x4981CB: jb      short loc_4981E5
0x4981CD: mov     ecx, ds:0B06C34h
0x4981D3: push    ecx
0x4981D4: call    sub_4979E0
0x4981D9: add     esp, 4
0x4981DC: cmp     [esi+0Ch], eax
0x4981DF: jnz     short loc_4981E5
0x4981E1: mov     al, 1
0x4981E3: jmp     short loc_4981E7
0x4981E5: xor     al, al
0x4981E7: test    al, al
0x4981E9: mov     bl, al
0x4981EB: jnz     short loc_498206
0x4981ED: test    edi, edi
0x4981EF: jnz     short loc_498196
0x4981F1: push    offset aDesiredRenderM; "Desired render mode not found on Adapte"...
0x4981F6: call    sub_497B20
0x4981FB: add     esp, 4
0x4981FE: pop     edi
0x4981FF: pop     esi
0x498200: pop     ebp
0x498201: mov     al, bl
0x498203: pop     ebx
0x498204: pop     ecx
0x498205: retn
0x498206: mov     edx, [esp+14h+var_4]
0x49820A: mov     eax, [edx+460h]
0x498210: xor     ecx, ecx
0x498212: xor     bl, bl
0x498214: cmp     [eax+4], ecx
0x498217: jz      loc_4982A6
0x49821D: cmp     eax, ecx
0x49821F: jz      loc_4982A6
0x498225: lea     esi, [eax+4]
0x498228: cmp     esi, ecx
0x49822A: jz      short loc_4982A6
0x49822C: cmp     ds:0B06CA4h, cl
0x498232: jz      short loc_4982A6
0x498234: mov     bl, [esi+1Eh]
0x498237: and     bl, 1
0x49823A: jz      short loc_49827D
0x49823C: mov     eax, [esi+0C4h]
0x498242: and     eax, 0FFFFh
0x498247: cmp     eax, ds:0B06C48h
0x49824D: jb      short loc_498274
0x49824F: movzx   ecx, word ptr [esi+0CCh]
0x498256: cmp     ecx, ds:0B06C44h
0x49825C: jb      short loc_498274
0x49825E: mov     ds:0B06C48h, eax
0x498263: movzx   edx, word ptr [esi+0CCh]
0x49826A: mov     bl, 1
0x49826C: mov     ds:0B06C44h, edx
0x498272: jmp     short loc_49828A
0x498274: xor     bl, bl
0x498276: push    offset aPixelAndVertex; "Pixel and Vertex Shader versions incorr"...
0x49827B: jmp     short loc_498282
0x49827D: push    offset aHardwareTLRequ; "Hardware T&L required but not supported"...
0x498282: call    sub_497B20
0x498287: add     esp, 4
0x49828A: cmp     dword ptr ds:0B06C8Ch, 1
0x498291: pop     edi
0x498292: setnle  al
0x498295: and     al, [esi+1Fh]
0x498298: pop     esi
0x498299: and     al, 1
0x49829B: mov     ds:0B34FA6h, al
0x4982A0: pop     ebp
0x4982A1: mov     al, bl
0x4982A3: pop     ebx
0x4982A4: pop     ecx
0x4982A5: retn
0x4982A6: movzx   edx, byte ptr ds:0B06DB4h
0x4982AD: push    ecx; int
0x4982AE: push    ecx; Str1
0x4982AF: push    ecx; int
0x4982B0: push    edx; char
0x4982B1: push    ecx; int
0x4982B2: push    ecx; int
0x4982B3: mov     ds:0B06C48h, ecx
0x4982B9: mov     ds:0B06C44h, ecx
0x4982BF: call    SetShaderPackage
0x4982C4: add     esp, 18h
0x4982C7: cmp     byte ptr ds:0B06CA4h, 0
0x4982CE: jnz     loc_4981FE
0x4982D4: pop     edi
0x4982D5: pop     esi
0x4982D6: pop     ebp
0x4982D7: mov     al, 1
0x4982D9: pop     ebx
0x4982DA: pop     ecx
0x4982DB: retn
0x4982DC: mov     byte ptr ds:0B34FC8h, 0
0x4982E3: xor     eax, eax
0x4982E5: jmp     short loc_4982F0
0x4982E7: align 10h
0x4982F0: mov     cl, ds:byte_A3DE48[eax]
0x4982F6: mov     ds:byte_B34FC8[eax], cl
0x4982FC: add     eax, 1
0x4982FF: test    cl, cl
0x498301: jnz     short loc_4982F0
0x498303: pop     esi
0x498304: pop     ebp
0x498305: mov     al, bl
0x498307: pop     ebx
0x498308: pop     ecx
0x498309: retn
0x49830A: mov     byte ptr ds:0B34FC8h, 0
0x498311: xor     eax, eax
0x498313: jmp     short loc_498320
0x498315: align 10h
0x498320: mov     cl, ds:byte_A3DE24[eax]
0x498326: mov     ds:byte_B34FC8[eax], cl
0x49832C: add     eax, 1
0x49832F: test    cl, cl
0x498331: jnz     short loc_498320
0x498333: pop     ebp
0x498334: mov     al, bl
0x498336: pop     ebx
0x498337: pop     ecx
0x498338: retn
