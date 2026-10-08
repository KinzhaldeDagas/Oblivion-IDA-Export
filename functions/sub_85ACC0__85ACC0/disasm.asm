0x85ACC0: push    0FFFFFFFFh
0x85ACC2: push    offset SEH_854E90
0x85ACC7: mov     eax, large fs:0
0x85ACCD: push    eax
0x85ACCE: push    esi
0x85ACCF: push    edi
0x85ACD0: mov     eax, ds:0B30AACh
0x85ACD5: xor     eax, esp
0x85ACD7: push    eax
0x85ACD8: lea     eax, [esp+18h+var_C]
0x85ACDC: mov     large fs:0, eax
0x85ACE2: mov     edi, ecx
0x85ACE4: cmp     [esp+18h+arg_10], 0
0x85ACE9: jz      loc_85AD86
0x85ACEF: cmp     byte ptr [esp+18h+arg_8], 1
0x85ACF4: jnz     short loc_85AD63
0x85ACF6: push    10h; Size
0x85ACF8: call    FormHeapAlloc
0x85ACFD: add     esp, 4
0x85AD00: mov     [esp+18h+arg_8], eax
0x85AD04: test    eax, eax
0x85AD06: mov     esi, [esp+18h+arg_C]
0x85AD0A: mov     [esp+18h+var_4], 0
0x85AD12: jz      short loc_85AD31
0x85AD14: movzx   ecx, byte ptr [esi]
0x85AD17: mov     edx, [esp+18h+vtable]
0x85AD1B: push    0
0x85AD1D: push    0; lightCount
0x85AD1F: push    ecx; byte6
0x85AD20: push    18Fh; selector
0x85AD25: push    edx; geometry
0x85AD26: push    eax; outPass
0x85AD27: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x85AD2C: add     esp, 18h
0x85AD2F: jmp     short loc_85AD33
0x85AD31: xor     eax, eax
0x85AD33: mov     [esp+18h+arg_8], eax
0x85AD37: lea     eax, [esp+18h+arg_8]
0x85AD3B: push    eax
0x85AD3C: lea     ecx, [edi+28h]
0x85AD3F: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x85AD47: call    NiTPointerList__AddTail; Generic NiTPointerList tail insertion: allocates a node through the list's allocator vfunc, links it after end, updates start/end, and increments numItems.
0x85AD4C: mov     byte ptr [esi], 0
0x85AD4F: mov     ecx, [esp+18h+var_C]
0x85AD53: mov     large fs:0, ecx
0x85AD5A: pop     ecx
0x85AD5B: pop     edi
0x85AD5C: pop     esi
0x85AD5D: add     esp, 0Ch
0x85AD60: retn    14h
0x85AD63: mov     eax, [esp+18h+arg_4]
0x85AD67: mov     ecx, [esp+18h+arg_C]
0x85AD6B: add     word ptr [eax], 1
0x85AD6F: mov     byte ptr [ecx], 0
0x85AD72: mov     ecx, [esp+18h+var_C]
0x85AD76: mov     large fs:0, ecx
0x85AD7D: pop     ecx
0x85AD7E: pop     edi
0x85AD7F: pop     esi
0x85AD80: add     esp, 0Ch
0x85AD83: retn    14h
0x85AD86: cmp     byte ptr [esp+18h+arg_8], 1
0x85AD8B: jnz     short loc_85ADFA
0x85AD8D: push    10h; Size
0x85AD8F: call    FormHeapAlloc
0x85AD94: add     esp, 4
0x85AD97: mov     [esp+18h+arg_8], eax
0x85AD9B: test    eax, eax
0x85AD9D: mov     esi, [esp+18h+arg_C]
0x85ADA1: mov     [esp+18h+var_4], 1
0x85ADA9: jz      short loc_85ADC8
0x85ADAB: movzx   edx, byte ptr [esi]
0x85ADAE: mov     ecx, [esp+18h+vtable]
0x85ADB2: push    0
0x85ADB4: push    0; lightCount
0x85ADB6: push    edx; byte6
0x85ADB7: push    18Eh; selector
0x85ADBC: push    ecx; geometry
0x85ADBD: push    eax; outPass
0x85ADBE: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x85ADC3: add     esp, 18h
0x85ADC6: jmp     short loc_85ADCA
0x85ADC8: xor     eax, eax
0x85ADCA: lea     edx, [esp+18h+arg_8]
0x85ADCE: push    edx
0x85ADCF: lea     ecx, [edi+28h]
0x85ADD2: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x85ADDA: mov     [esp+1Ch+arg_8], eax
0x85ADDE: call    NiTPointerList__AddTail; Generic NiTPointerList tail insertion: allocates a node through the list's allocator vfunc, links it after end, updates start/end, and increments numItems.
0x85ADE3: mov     byte ptr [esi], 0
0x85ADE6: mov     ecx, [esp+18h+var_C]
0x85ADEA: mov     large fs:0, ecx
0x85ADF1: pop     ecx
0x85ADF2: pop     edi
0x85ADF3: pop     esi
0x85ADF4: add     esp, 0Ch
0x85ADF7: retn    14h
0x85ADFA: mov     eax, [esp+18h+arg_4]
0x85ADFE: add     word ptr [eax], 1
0x85AE02: mov     eax, [esp+18h+arg_C]
0x85AE06: mov     byte ptr [eax], 0
0x85AE09: mov     ecx, [esp+18h+var_C]
0x85AE0D: mov     large fs:0, ecx
0x85AE14: pop     ecx
0x85AE15: pop     edi
0x85AE16: pop     esi
0x85AE17: add     esp, 0Ch
0x85AE1A: retn    14h
0x9D3AB0: mov     eax, [ebp+0Ch]
0x9D3AB3: push    eax
0x9D3AB4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3AB9: pop     ecx
0x9D3ABA: retn
0x9D3ABB: mov     eax, [ebp+0Ch]
0x9D3ABE: push    eax
0x9D3ABF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3AC4: pop     ecx
0x9D3AC5: retn
0x9D3AC6: mov     edx, [esp+passCount]
0x9D3ACA: lea     eax, [edx-8]
0x9D3ACD: mov     ecx, [edx-0Ch]
0x9D3AD0: xor     ecx, eax
0x9D3AD2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D3AD7: mov     eax, offset stru_AFBD98
0x9D3ADC: jmp     ___CxxFrameHandler3
