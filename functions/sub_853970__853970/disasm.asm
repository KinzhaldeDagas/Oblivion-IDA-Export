0x853970: push    0FFFFFFFFh
0x853972: push    offset SEH_853970
0x853977: mov     eax, large fs:0
0x85397D: push    eax
0x85397E: sub     esp, 188h
0x853984: mov     eax, ds:0B30AACh
0x853989: xor     eax, esp
0x85398B: mov     [esp+194h+var_10], eax
0x853992: push    ebp
0x853993: push    esi
0x853994: push    edi
0x853995: mov     eax, ds:0B30AACh
0x85399A: xor     eax, esp
0x85399C: push    eax
0x85399D: lea     eax, [esp+1A4h+var_C]
0x8539A4: mov     large fs:0, eax
0x8539AA: cmp     [esp+1A4h+arg_14], 0
0x8539B2: mov     esi, [esp+1A4h+vtable]
0x8539B9: mov     eax, [esp+1A4h+arg_8]
0x8539C0: mov     edi, [esp+1A4h+arg_10]
0x8539C7: mov     ebp, ecx
0x8539C9: jnz     loc_853B8B
0x8539CF: cmp     [esp+1A4h+arg_24], 0
0x8539D7: jnz     loc_853B24
0x8539DD: cmp     [esp+1A4h+arg_20], 0
0x8539E5: jnz     loc_853A8B
0x8539EB: cmp     [esp+1A4h+arg_1C], 0
0x8539F3: jnz     short loc_853A40
0x8539F5: cmp     [esp+1A4h+arg_C], 1
0x8539FD: jnz     loc_853CD8
0x853A03: push    10h; Size
0x853A05: call    FormHeapAlloc
0x853A0A: add     esp, 4
0x853A0D: mov     [esp+1A4h+var_194], eax
0x853A11: test    eax, eax
0x853A13: mov     [esp+1A4h+var_4], 0
0x853A1E: jz      loc_853B68
0x853A24: movzx   ecx, byte ptr [edi]
0x853A27: push    0
0x853A29: push    0; lightCount
0x853A2B: push    ecx; byte6
0x853A2C: push    104h; selector
0x853A31: push    esi; geometry
0x853A32: push    eax; outPass
0x853A33: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x853A38: add     esp, 18h
0x853A3B: jmp     loc_853B6A
0x853A40: cmp     [esp+1A4h+arg_C], 1
0x853A48: jnz     loc_853CD8
0x853A4E: push    10h; Size
0x853A50: call    FormHeapAlloc
0x853A55: add     esp, 4
0x853A58: mov     [esp+1A4h+var_194], eax
0x853A5C: test    eax, eax
0x853A5E: mov     [esp+1A4h+var_4], 1
0x853A69: jz      loc_853B68
0x853A6F: movzx   ecx, byte ptr [edi]
0x853A72: push    0
0x853A74: push    0; lightCount
0x853A76: push    ecx; byte6
0x853A77: push    105h; selector
0x853A7C: push    esi; geometry
0x853A7D: push    eax; outPass
0x853A7E: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x853A83: add     esp, 18h
0x853A86: jmp     loc_853B6A
0x853A8B: cmp     [esp+1A4h+arg_28], 0
0x853A93: jnz     short loc_853AE0
0x853A95: cmp     [esp+1A4h+arg_C], 1
0x853A9D: jnz     loc_853CD8
0x853AA3: push    10h; Size
0x853AA5: call    FormHeapAlloc
0x853AAA: add     esp, 4
0x853AAD: mov     [esp+1A4h+var_194], eax
0x853AB1: test    eax, eax
0x853AB3: mov     [esp+1A4h+var_4], 2
0x853ABE: jz      loc_853B68
0x853AC4: movzx   ecx, byte ptr [edi]
0x853AC7: push    0
0x853AC9: push    0; lightCount
0x853ACB: push    ecx; byte6
0x853ACC: push    108h; selector
0x853AD1: push    esi; geometry
0x853AD2: push    eax; outPass
0x853AD3: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x853AD8: add     esp, 18h
0x853ADB: jmp     loc_853B6A
0x853AE0: cmp     [esp+1A4h+arg_C], 1
0x853AE8: jnz     loc_853CD8
0x853AEE: push    10h; Size
0x853AF0: call    FormHeapAlloc
0x853AF5: add     esp, 4
0x853AF8: mov     [esp+1A4h+var_194], eax
0x853AFC: test    eax, eax
0x853AFE: mov     [esp+1A4h+var_4], 3
0x853B09: jz      short loc_853B68
0x853B0B: movzx   ecx, byte ptr [edi]
0x853B0E: push    0
0x853B10: push    0; lightCount
0x853B12: push    ecx; byte6
0x853B13: push    106h; selector
0x853B18: push    esi; geometry
0x853B19: push    eax; outPass
0x853B1A: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x853B1F: add     esp, 18h
0x853B22: jmp     short loc_853B6A
0x853B24: cmp     [esp+1A4h+arg_C], 1
0x853B2C: jnz     loc_853CD8
0x853B32: push    10h; Size
0x853B34: call    FormHeapAlloc
0x853B39: add     esp, 4
0x853B3C: mov     [esp+1A4h+var_194], eax
0x853B40: test    eax, eax
0x853B42: mov     [esp+1A4h+var_4], 4
0x853B4D: jz      short loc_853B68
0x853B4F: movzx   ecx, byte ptr [edi]
0x853B52: push    0
0x853B54: push    0; lightCount
0x853B56: push    ecx; byte6
0x853B57: push    10Bh; selector
0x853B5C: push    esi; geometry
0x853B5D: push    eax; outPass
0x853B5E: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x853B63: add     esp, 18h
0x853B66: jmp     short loc_853B6A
0x853B68: xor     eax, eax
0x853B6A: lea     edx, [esp+1A4h+var_194]
0x853B6E: push    edx
0x853B6F: lea     ecx, [ebp+28h]
0x853B72: mov     [esp+1A8h+var_4], 0FFFFFFFFh
0x853B7D: mov     [esp+1A8h+var_194], eax
0x853B81: call    NiTPointerList__AddTail; Generic NiTPointerList tail insertion: allocates a node through the list's allocator vfunc, links it after end, updates start/end, and increments numItems.
0x853B86: jmp     loc_853D92
0x853B8B: cmp     [esp+1A4h+arg_1C], 0
0x853B93: jnz     loc_853C87
0x853B99: cmp     [esp+1A4h+arg_20], 0
0x853BA1: jnz     short loc_853BE7
0x853BA3: cmp     [esp+1A4h+arg_C], 1
0x853BAB: jnz     loc_853CD8
0x853BB1: push    10h; Size
0x853BB3: call    FormHeapAlloc
0x853BB8: add     esp, 4
0x853BBB: mov     [esp+1A4h+var_194], eax
0x853BBF: test    eax, eax
0x853BC1: mov     [esp+1A4h+var_4], 5
0x853BCC: jz      short loc_853B68
0x853BCE: movzx   ecx, byte ptr [edi]
0x853BD1: push    0
0x853BD3: push    0; lightCount
0x853BD5: push    ecx; byte6
0x853BD6: push    107h; selector
0x853BDB: push    esi; geometry
0x853BDC: push    eax; outPass
0x853BDD: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x853BE2: add     esp, 18h
0x853BE5: jmp     short loc_853B6A
0x853BE7: cmp     [esp+1A4h+arg_28], 0
0x853BEF: jnz     short loc_853C3C
0x853BF1: cmp     [esp+1A4h+arg_C], 1
0x853BF9: jnz     loc_853CD8
0x853BFF: push    10h; Size
0x853C01: call    FormHeapAlloc
0x853C06: add     esp, 4
0x853C09: mov     [esp+1A4h+var_194], eax
0x853C0D: test    eax, eax
0x853C0F: mov     [esp+1A4h+var_4], 6
0x853C1A: jz      loc_853B68
0x853C20: movzx   ecx, byte ptr [edi]
0x853C23: push    0
0x853C25: push    0; lightCount
0x853C27: push    ecx; byte6
0x853C28: push    109h; selector
0x853C2D: push    esi; geometry
0x853C2E: push    eax; outPass
0x853C2F: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x853C34: add     esp, 18h
0x853C37: jmp     loc_853B6A
0x853C3C: cmp     [esp+1A4h+arg_C], 1
0x853C44: jnz     loc_853CD8
0x853C4A: push    10h; Size
0x853C4C: call    FormHeapAlloc
0x853C51: add     esp, 4
0x853C54: mov     [esp+1A4h+var_194], eax
0x853C58: test    eax, eax
0x853C5A: mov     [esp+1A4h+var_4], 7
0x853C65: jz      loc_853B68
0x853C6B: movzx   ecx, byte ptr [edi]
0x853C6E: push    0
0x853C70: push    0; lightCount
0x853C72: push    ecx; byte6
0x853C73: push    10Ch; selector
0x853C78: push    esi; geometry
0x853C79: push    eax; outPass
0x853C7A: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x853C7F: add     esp, 18h
0x853C82: jmp     loc_853B6A
0x853C87: cmp     [esp+1A4h+arg_20], 0
0x853C8F: jnz     short loc_853CE1
0x853C91: cmp     [esp+1A4h+arg_C], 1
0x853C99: jnz     short loc_853CD8
0x853C9B: push    10h; Size
0x853C9D: call    FormHeapAlloc
0x853CA2: add     esp, 4
0x853CA5: mov     [esp+1A4h+var_194], eax
0x853CA9: test    eax, eax
0x853CAB: mov     [esp+1A4h+var_4], 8
0x853CB6: jz      loc_853B68
0x853CBC: movzx   ecx, byte ptr [edi]
0x853CBF: push    0
0x853CC1: push    0; lightCount
0x853CC3: push    ecx; byte6
0x853CC4: push    10Ah; selector
0x853CC9: push    esi; geometry
0x853CCA: push    eax; outPass
0x853CCB: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x853CD0: add     esp, 18h
0x853CD3: jmp     loc_853B6A
0x853CD8: add     word ptr [eax], 1
0x853CDC: jmp     loc_853D92
0x853CE1: test    esi, esi
0x853CE3: jz      short loc_853D4D
0x853CE5: mov     eax, [esi+1Ch]
0x853CE8: test    eax, eax
0x853CEA: jz      short loc_853D25
0x853CEC: mov     eax, [eax+8]
0x853CEF: test    eax, eax
0x853CF1: jz      short loc_853D25
0x853CF3: mov     ecx, [esi+8]
0x853CF6: test    ecx, ecx
0x853CF8: jz      short loc_853D10
0x853CFA: push    ecx
0x853CFB: push    eax
0x853CFC: lea     eax, [esp+1ACh+var_190]
0x853D00: push    offset aParentSChildS; "Parent:%s,Child:%s"
0x853D05: push    eax
0x853D06: call    __sprintf
0x853D0B: add     esp, 10h
0x853D0E: jmp     short loc_853D5F
0x853D10: push    eax
0x853D11: lea     ecx, [esp+1A8h+var_190]
0x853D15: push    offset aParentS; "Parent:%s"
0x853D1A: push    ecx
0x853D1B: call    __sprintf
0x853D20: add     esp, 0Ch
0x853D23: jmp     short loc_853D5F
0x853D25: mov     eax, [esi+8]
0x853D28: test    eax, eax
0x853D2A: jz      short loc_853D41
0x853D2C: push    eax
0x853D2D: lea     edx, [esp+1A8h+var_190]
0x853D31: push    offset aS; "%s"
0x853D36: push    edx
0x853D37: call    __sprintf
0x853D3C: add     esp, 0Ch
0x853D3F: jmp     short loc_853D5F
0x853D41: push    offset aNone_1; "none"
0x853D46: lea     eax, [esp+1A8h+var_190]
0x853D4A: push    eax
0x853D4B: jmp     short loc_853D57
0x853D4D: push    offset aNone_1; "none"
0x853D52: lea     ecx, [esp+1A8h+var_190]
0x853D56: push    ecx
0x853D57: call    __sprintf
0x853D5C: add     esp, 8
0x853D5F: push    esi
0x853D60: lea     edx, [esp+1A8h+var_190]
0x853D64: push    edx
0x853D65: lea     eax, [esp+1ACh+var_110]
0x853D6C: push    offset aShaderErrorS08; "SHADER ERROR (%s)(%08X) : no shader to "...
0x853D71: push    eax
0x853D72: call    __sprintf
0x853D77: mov     eax, ds:0B42E8Ch
0x853D7C: add     esp, 10h
0x853D7F: test    eax, eax
0x853D81: jz      short loc_853D92
0x853D83: lea     ecx, [esp+1A4h+var_110]
0x853D8A: push    0; _DWORD
0x853D8C: push    ecx; _DWORD
0x853D8D: call    eax ; unk_B42E8C
0x853D8F: add     esp, 8
0x853D92: mov     byte ptr [edi], 0
0x853D95: mov     ecx, [esp+1A4h+var_C]
0x853D9C: mov     large fs:0, ecx
0x853DA3: pop     ecx
0x853DA4: pop     edi
0x853DA5: pop     esi
0x853DA6: pop     ebp
0x853DA7: mov     ecx, [esp+194h+var_10]
0x853DAE: xor     ecx, esp
0x853DB0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x853DB5: add     esp, 194h
0x853DBB: retn    2Ch ; ','
0x9D3830: mov     eax, [ebp-194h]
0x9D3836: push    eax
0x9D3837: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D383C: pop     ecx
0x9D383D: retn
0x9D383E: mov     eax, [ebp-194h]
0x9D3844: push    eax
0x9D3845: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D384A: pop     ecx
0x9D384B: retn
0x9D384C: mov     eax, [ebp-194h]
0x9D3852: push    eax
0x9D3853: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3858: pop     ecx
0x9D3859: retn
0x9D385A: mov     eax, [ebp-194h]
0x9D3860: push    eax
0x9D3861: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3866: pop     ecx
0x9D3867: retn
0x9D3868: mov     eax, [ebp-194h]
0x9D386E: push    eax
0x9D386F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3874: pop     ecx
0x9D3875: retn
0x9D3876: mov     eax, [ebp-194h]
0x9D387C: push    eax
0x9D387D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3882: pop     ecx
0x9D3883: retn
0x9D3884: mov     eax, [ebp-194h]
0x9D388A: push    eax
0x9D388B: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3890: pop     ecx
0x9D3891: retn
0x9D3892: mov     eax, [ebp-194h]
0x9D3898: push    eax
0x9D3899: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D389E: pop     ecx
0x9D389F: retn
0x9D38A0: mov     eax, [ebp-194h]
0x9D38A6: push    eax
0x9D38A7: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D38AC: pop     ecx
0x9D38AD: retn
0x9D38AE: mov     edx, [esp+arg_4]
0x9D38B2: lea     eax, [edx-194h]
0x9D38B8: mov     ecx, [edx-198h]
0x9D38BE: xor     ecx, eax
0x9D38C0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D38C5: add     eax, 0Ch
0x9D38C8: mov     ecx, [edx-4]
0x9D38CB: xor     ecx, eax
0x9D38CD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D38D2: mov     eax, offset stru_AFBB98
0x9D38D7: jmp     ___CxxFrameHandler3
