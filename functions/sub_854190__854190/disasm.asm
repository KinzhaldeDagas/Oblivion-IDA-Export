0x854190: push    0FFFFFFFFh
0x854192: push    offset SEH_854190
0x854197: mov     eax, large fs:0
0x85419D: push    eax
0x85419E: push    esi
0x85419F: push    edi
0x8541A0: mov     eax, ds:0B30AACh
0x8541A5: xor     eax, esp
0x8541A7: push    eax
0x8541A8: lea     eax, [esp+18h+var_C]
0x8541AC: mov     large fs:0, eax
0x8541B2: mov     edi, ecx
0x8541B4: cmp     [esp+18h+arg_14], 0
0x8541B9: mov     esi, [esp+18h+arg_C]
0x8541BD: jnz     loc_8542F9
0x8541C3: cmp     [esp+18h+arg_10], 0
0x8541C8: jnz     loc_854267
0x8541CE: cmp     [esp+18h+arg_18], 0
0x8541D3: jnz     short loc_85421E
0x8541D5: cmp     byte ptr [esp+18h+arg_8], 1
0x8541DA: jnz     loc_854354
0x8541E0: push    10h; Size
0x8541E2: call    FormHeapAlloc
0x8541E7: add     esp, 4
0x8541EA: mov     [esp+18h+arg_8], eax
0x8541EE: test    eax, eax
0x8541F0: mov     [esp+18h+var_4], 0
0x8541F8: jz      loc_854337
0x8541FE: movzx   ecx, byte ptr [esi]
0x854201: mov     edx, [esp+18h+vtable]
0x854205: push    0
0x854207: push    0; lightCount
0x854209: push    ecx; byte6
0x85420A: push    190h; selector
0x85420F: push    edx; geometry
0x854210: push    eax; outPass
0x854211: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x854216: add     esp, 18h
0x854219: jmp     loc_854339
0x85421E: cmp     byte ptr [esp+18h+arg_8], 1
0x854223: jnz     loc_854354
0x854229: push    10h; Size
0x85422B: call    FormHeapAlloc
0x854230: add     esp, 4
0x854233: mov     [esp+18h+arg_8], eax
0x854237: test    eax, eax
0x854239: mov     [esp+18h+var_4], 1
0x854241: jz      loc_854337
0x854247: movzx   ecx, byte ptr [esi]
0x85424A: mov     edx, [esp+18h+vtable]
0x85424E: push    0
0x854250: push    0; lightCount
0x854252: push    ecx; byte6
0x854253: push    191h; selector
0x854258: push    edx; geometry
0x854259: push    eax; outPass
0x85425A: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x85425F: add     esp, 18h
0x854262: jmp     loc_854339
0x854267: cmp     [esp+18h+arg_18], 0
0x85426C: jnz     short loc_8542B7
0x85426E: cmp     byte ptr [esp+18h+arg_8], 1
0x854273: jnz     loc_854354
0x854279: push    10h; Size
0x85427B: call    FormHeapAlloc
0x854280: add     esp, 4
0x854283: mov     [esp+18h+arg_8], eax
0x854287: test    eax, eax
0x854289: mov     [esp+18h+var_4], 2
0x854291: jz      loc_854337
0x854297: movzx   ecx, byte ptr [esi]
0x85429A: mov     edx, [esp+18h+vtable]
0x85429E: push    0
0x8542A0: push    0; lightCount
0x8542A2: push    ecx; byte6
0x8542A3: push    192h; selector
0x8542A8: push    edx; geometry
0x8542A9: push    eax; outPass
0x8542AA: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x8542AF: add     esp, 18h
0x8542B2: jmp     loc_854339
0x8542B7: cmp     byte ptr [esp+18h+arg_8], 1
0x8542BC: jnz     loc_854354
0x8542C2: push    10h; Size
0x8542C4: call    FormHeapAlloc
0x8542C9: add     esp, 4
0x8542CC: mov     [esp+18h+arg_8], eax
0x8542D0: test    eax, eax
0x8542D2: mov     [esp+18h+var_4], 3
0x8542DA: jz      short loc_854337
0x8542DC: movzx   ecx, byte ptr [esi]
0x8542DF: mov     edx, [esp+18h+vtable]
0x8542E3: push    0
0x8542E5: push    0; lightCount
0x8542E7: push    ecx; byte6
0x8542E8: push    193h; selector
0x8542ED: push    edx; geometry
0x8542EE: push    eax; outPass
0x8542EF: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x8542F4: add     esp, 18h
0x8542F7: jmp     short loc_854339
0x8542F9: cmp     byte ptr [esp+18h+arg_8], 1
0x8542FE: jnz     short loc_854354
0x854300: push    10h; Size
0x854302: call    FormHeapAlloc
0x854307: add     esp, 4
0x85430A: mov     [esp+18h+arg_8], eax
0x85430E: test    eax, eax
0x854310: mov     [esp+18h+var_4], 4
0x854318: jz      short loc_854337
0x85431A: movzx   ecx, byte ptr [esi]
0x85431D: mov     edx, [esp+18h+vtable]
0x854321: push    0
0x854323: push    0; lightCount
0x854325: push    ecx; byte6
0x854326: push    194h; selector
0x85432B: push    edx; geometry
0x85432C: push    eax; outPass
0x85432D: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x854332: add     esp, 18h
0x854335: jmp     short loc_854339
0x854337: xor     eax, eax
0x854339: mov     [esp+18h+arg_8], eax
0x85433D: lea     eax, [esp+18h+arg_8]
0x854341: push    eax
0x854342: lea     ecx, [edi+28h]
0x854345: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x85434D: call    NiTPointerList__AddTail; Generic NiTPointerList tail insertion: allocates a node through the list's allocator vfunc, links it after end, updates start/end, and increments numItems.
0x854352: jmp     short loc_85435C
0x854354: mov     eax, [esp+18h+arg_4]
0x854358: add     word ptr [eax], 1
0x85435C: mov     byte ptr [esi], 0
0x85435F: mov     ecx, [esp+18h+var_C]
0x854363: mov     large fs:0, ecx
0x85436A: pop     ecx
0x85436B: pop     edi
0x85436C: pop     esi
0x85436D: add     esp, 0Ch
0x854370: retn    1Ch
0x9D3980: mov     eax, [ebp+0Ch]
0x9D3983: push    eax
0x9D3984: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3989: pop     ecx
0x9D398A: retn
0x9D398B: mov     eax, [ebp+0Ch]
0x9D398E: push    eax
0x9D398F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3994: pop     ecx
0x9D3995: retn
0x9D3996: mov     eax, [ebp+0Ch]
0x9D3999: push    eax
0x9D399A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D399F: pop     ecx
0x9D39A0: retn
0x9D39A1: mov     eax, [ebp+0Ch]
0x9D39A4: push    eax
0x9D39A5: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D39AA: pop     ecx
0x9D39AB: retn
0x9D39AC: mov     eax, [ebp+0Ch]
0x9D39AF: push    eax
0x9D39B0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D39B5: pop     ecx
0x9D39B6: retn
0x9D39B7: mov     edx, [esp+arg_4]
0x9D39BB: lea     eax, [edx-8]
0x9D39BE: mov     ecx, [edx-0Ch]
0x9D39C1: xor     ecx, eax
0x9D39C3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D39C8: mov     eax, offset stru_AFBC8C
0x9D39CD: jmp     ___CxxFrameHandler3
