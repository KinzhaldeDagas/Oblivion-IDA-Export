0x76BD40: call    sub_761DF0
0x76BD45: cmp     eax, 0FFFFFFFFh
0x76BD48: jnz     short loc_76BD73
0x76BD4A: push    0FFh; Src
0x76BD4F: push    offset aCreationFailed; "Creation failed: Could not initialize D"...
0x76BD54: push    100h; SizeInBytes
0x76BD59: push    offset byte_B3F828; Dst
0x76BD5E: call    _strncpy_s
0x76BD63: push    offset aNidx9rendererC; "NiDX9Renderer::Create> Invalid device I"...
0x76BD68: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x76BD6D: add     esp, 14h
0x76BD70: xor     eax, eax
0x76BD72: retn
0x76BD73: push    esi
0x76BD74: push    0B00h; Size
0x76BD79: call    FormHeapAlloc
0x76BD7E: add     esp, 4
0x76BD81: test    eax, eax
0x76BD83: jz      short loc_76BD90
0x76BD85: mov     ecx, eax; this
0x76BD87: call    ??0NiDX9Renderer@@QAE@XZ; NiDX9Renderer::NiDX9Renderer(void)
0x76BD8C: mov     esi, eax
0x76BD8E: jmp     short loc_76BD92
0x76BD90: xor     esi, esi
0x76BD92: mov     eax, [esp+4+arg_34]
0x76BD96: mov     ecx, [esp+4+arg_30]
0x76BD9A: mov     edx, [esp+4+arg_2C]
0x76BD9E: push    eax
0x76BD9F: mov     eax, [esp+8+arg_28]
0x76BDA3: push    ecx
0x76BDA4: mov     ecx, [esp+0Ch+arg_24]
0x76BDA8: push    edx
0x76BDA9: mov     edx, [esp+10h+arg_20]
0x76BDAD: push    eax
0x76BDAE: mov     eax, [esp+14h+arg_1C]
0x76BDB2: push    ecx
0x76BDB3: mov     ecx, [esp+18h+arg_18]
0x76BDB7: push    edx
0x76BDB8: mov     edx, [esp+1Ch+arg_14]
0x76BDBC: push    eax
0x76BDBD: mov     eax, [esp+20h+arg_10]
0x76BDC1: push    ecx
0x76BDC2: mov     ecx, [esp+24h+arg_C]
0x76BDC6: push    edx
0x76BDC7: mov     edx, [esp+28h+arg_8]
0x76BDCB: push    eax
0x76BDCC: mov     eax, [esp+2Ch+arg_4]
0x76BDD0: push    ecx
0x76BDD1: mov     ecx, [esp+30h+arg_0]
0x76BDD5: push    edx
0x76BDD6: push    eax
0x76BDD7: push    ecx
0x76BDD8: mov     ecx, esi
0x76BDDA: call    NiRenderer_Create
0x76BDDF: test    al, al
0x76BDE1: jnz     short loc_76BDF3
0x76BDE3: test    esi, esi
0x76BDE5: jz      short loc_76BDF1
0x76BDE7: mov     edx, [esi]
0x76BDE9: mov     eax, [edx]
0x76BDEB: push    1
0x76BDED: mov     ecx, esi
0x76BDEF: call    eax
0x76BDF1: xor     esi, esi
0x76BDF3: mov     eax, esi
0x76BDF5: pop     esi
0x76BDF6: retn
