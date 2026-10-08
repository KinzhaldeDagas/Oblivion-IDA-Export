0x7837F0: push    ebp; Oblivion-authoritative: vertex analogue of the scalar HLSL constant path; resolves the constant-table handle and dispatches to bool/float/int vertex-register setters, transposing matrices when required.
0x7837F1: mov     ebp, esp
0x7837F3: and     esp, 0FFFFFFF0h
0x7837F6: sub     esp, 84h
0x7837FC: push    ebx
0x7837FD: push    esi
0x7837FE: mov     esi, ecx
0x783800: cmp     dword ptr [esi+40h], 0
0x783804: push    edi
0x783805: jz      loc_7839A9
0x78380B: cmp     dword ptr [esi+1Ch], 0
0x78380F: jz      loc_7839A9
0x783815: cmp     [ebp+constantData], 0
0x783819: mov     edi, [ebp+arg_0]
0x78381C: jnz     short loc_783824
0x78381E: mov     eax, [edi+30h]
0x783821: mov     [ebp+constantData], eax
0x783824: mov     ebx, [edi+24h]
0x783827: test    ebx, ebx
0x783829: jnz     short loc_78382E
0x78382B: mov     ebx, [edi+0Ch]
0x78382E: mov     eax, [esi+40h]
0x783831: mov     ecx, [eax]
0x783833: mov     edx, [ecx+24h]
0x783836: push    ebx
0x783837: push    0
0x783839: push    eax
0x78383A: call    edx
0x78383C: test    eax, eax
0x78383E: jz      loc_783997
0x783844: mov     ecx, [esi+40h]
0x783847: lea     ebx, [esp+90h+var_74]
0x78384B: push    ebx
0x78384C: lea     ebx, [esp+94h+var_70]
0x783850: push    ebx
0x783851: mov     [esp+98h+var_74], 1
0x783859: mov     edx, [ecx]
0x78385B: push    eax
0x78385C: mov     eax, [edx+18h]
0x78385F: push    ecx
0x783860: call    eax
0x783862: cmp     byte ptr ds:0B4295Bh, 0
0x783869: mov     ebx, [edi+14h]
0x78386C: mov     [esp+90h+var_78], eax
0x783870: jnz     short loc_783877
0x783872: call    NiD3DHLSLShader__InitializeParameterClassTables; Initializes the HLSL/D3DX parameter-class dispatch lookup once (observed identity mapping for supported class codes) and sets the ready flag.
0x783877: and     ebx, 0FFh
0x78387D: cmp     dword ptr ds:0B428D8h[ebx*4], 8
0x783885: jz      loc_783948
0x78388B: mov     ecx, edi
0x78388D: call    sub_782E10
0x783892: test    al, al
0x783894: jnz     loc_783948
0x78389A: mov     ecx, edi
0x78389C: call    sub_783340
0x7838A1: test    al, al
0x7838A3: jnz     short loc_7838D1
0x7838A5: mov     ecx, edi
0x7838A7: call    sub_783370
0x7838AC: test    al, al
0x7838AE: jnz     short loc_7838D1
0x7838B0: mov     ecx, edi
0x7838B2: call    sub_7833A0
0x7838B7: test    al, al
0x7838B9: jnz     short loc_7838D1
0x7838BB: mov     ecx, edi
0x7838BD: call    sub_7833D0
0x7838C2: test    al, al
0x7838C4: jnz     short loc_7838D1
0x7838C6: mov     ecx, edi
0x7838C8: call    sub_783310
0x7838CD: test    al, al
0x7838CF: jz      short loc_7838F6
0x7838D1: mov     ecx, [esp+90h+vector4Count]
0x7838D5: mov     edx, [ebp+constantData]
0x7838D8: mov     eax, [esp+90h+startRegister]
0x7838DC: push    0; unused
0x7838DE: push    ecx; vector4Count
0x7838DF: mov     ecx, [esi+24h]; this
0x7838E2: push    edx; constantData
0x7838E3: push    eax; startRegister
0x7838E4: call    NiDX9RenderState__SetVertexShaderConstantF; Thin Direct3D9 render-state wrapper for IDirect3DDevice9::SetVertexShaderConstantF (device vtable slot +0x178).
0x7838E9: test    al, al
0x7838EB: jz      loc_783985
0x7838F1: jmp     loc_78397D
0x7838F6: mov     ecx, edi
0x7838F8: call    sub_7832E0
0x7838FD: test    al, al
0x7838FF: jz      short loc_78391F
0x783901: mov     ecx, [esp+90h+vector4Count]
0x783905: mov     edx, [ebp+constantData]
0x783908: mov     eax, [esp+90h+startRegister]
0x78390C: push    0; unused
0x78390E: push    ecx; vector4Count
0x78390F: mov     ecx, [esi+24h]; this
0x783912: push    edx; constantData
0x783913: push    eax; startRegister
0x783914: call    NiDX9RenderState__SetVertexShaderConstantI; Thin Direct3D9 render-state wrapper for IDirect3DDevice9::SetVertexShaderConstantI (device vtable slot +0x180).
0x783919: test    al, al
0x78391B: jz      short loc_783985
0x78391D: jmp     short loc_78397D
0x78391F: mov     ecx, edi
0x783921: call    sub_7832B0
0x783926: test    al, al
0x783928: jz      short loc_7839A9
0x78392A: mov     ecx, [esp+90h+vector4Count]
0x78392E: mov     edx, [ebp+constantData]
0x783931: mov     eax, [esp+90h+startRegister]
0x783935: push    0; unused
0x783937: push    ecx; boolCount
0x783938: mov     ecx, [esi+24h]; this
0x78393B: push    edx; constantData
0x78393C: push    eax; startRegister
0x78393D: call    NiDX9RenderState__SetVertexShaderConstantB; Thin Direct3D9 render-state wrapper for IDirect3DDevice9::SetVertexShaderConstantB (device vtable slot +0x188).
0x783942: test    al, al
0x783944: jz      short loc_783985
0x783946: jmp     short loc_78397D
0x783948: mov     ecx, [ebp+constantData]
0x78394B: push    ecx
0x78394C: lea     edx, [esp+94h+var_40]
0x783950: push    edx
0x783951: call    D3DXMatrixTranspose_0
0x783956: mov     edx, [esp+90h+vector4Count]
0x78395A: mov     esi, [esi+24h]
0x78395D: mov     eax, [esi+0FF8h]
0x783963: mov     ecx, [eax]
0x783965: push    edx
0x783966: lea     edx, [esp+94h+var_40]
0x78396A: push    edx
0x78396B: mov     edx, [esp+98h+startRegister]
0x78396F: push    edx
0x783970: push    eax
0x783971: mov     eax, [ecx+178h]
0x783977: call    eax
0x783979: test    eax, eax
0x78397B: jl      short loc_783985
0x78397D: mov     [esp+90h+var_78], 0
0x783985: xor     eax, eax
0x783987: cmp     [esp+90h+var_78], eax
0x78398B: setnl   al
0x78398E: pop     edi
0x78398F: pop     esi
0x783990: pop     ebx
0x783991: mov     esp, ebp
0x783993: pop     ebp
0x783994: retn    0Ch
0x783997: mov     ecx, [esi+8]; this
0x78399A: push    ebx
0x78399B: push    ecx
0x78399C: push    offset aNid3dhlslverte; "NiD3DHLSLVertexShader::SetVertexShaderC"...
0x7839A1: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x7839A6: add     esp, 0Ch
0x7839A9: pop     edi
0x7839AA: pop     esi
0x7839AB: xor     al, al
0x7839AD: pop     ebx
0x7839AE: mov     esp, ebp
0x7839B0: pop     ebp
0x7839B1: retn    0Ch
