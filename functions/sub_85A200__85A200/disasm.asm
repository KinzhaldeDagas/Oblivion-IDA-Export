0x85A200: push    0FFFFFFFFh; [Verified] Appends one 1x decal RenderPass per batch from a DECAL_DATA item count. The count is supplied from BSShaderLightingProperty+0x8C by BSShaderPPLightingProperty_BuildInheritedLightPasses; batch size is OB_ShaderPassControl.decalPassBatchSize. With emitMode==1, creates selector 0x18A/BSSM_DECAL or 0x18B/BSSM_DECAL_A according to useDecalVariantA; otherwise increments the output pass count. `passByte` is forwarded unchanged; its downstream meaning remains Unknown. Fallout uses distinct selectors 0x1FF/0x1FE and has a separate accumulator geometry-group path; direct equivalence is Unknown.
0x85A202: push    offset SEH_8122A0
0x85A207: mov     eax, large fs:0
0x85A20D: push    eax
0x85A20E: push    ecx
0x85A20F: push    ebp
0x85A210: push    esi
0x85A211: push    edi
0x85A212: mov     eax, ds:0B30AACh
0x85A217: xor     eax, esp
0x85A219: push    eax
0x85A21A: lea     eax, [esp+20h+var_C]
0x85A21E: mov     large fs:0, eax
0x85A224: mov     ebp, ecx
0x85A226: mov     eax, [esp+20h+decalCount]
0x85A22A: test    eax, eax
0x85A22C: jle     loc_85A376
0x85A232: cmp     [esp+20h+useAlphaDecalSelector], 0
0x85A237: jnz     loc_85A2C8
0x85A23D: cmp     byte ptr [esp+20h+emitMode], 1
0x85A242: jnz     loc_85A35C
0x85A248: push    10h; Size
0x85A24A: call    FormHeapAlloc
0x85A24F: add     esp, 4
0x85A252: mov     [esp+20h+var_10], eax
0x85A256: test    eax, eax
0x85A258: mov     [esp+20h+var_4], 0
0x85A260: jz      short loc_85A285
0x85A262: mov     ecx, [esp+20h+decalPassFlags]
0x85A266: movzx   edx, byte ptr [ecx]
0x85A269: mov     ecx, [esp+20h+vtable]
0x85A26D: push    0
0x85A26F: push    0; lightCount
0x85A271: push    edx; byte6
0x85A272: push    18Ah; selector
0x85A277: push    ecx; geometry
0x85A278: push    eax; outPass
0x85A279: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x85A27E: add     esp, 18h
0x85A281: mov     edi, eax
0x85A283: jmp     short loc_85A287
0x85A285: xor     edi, edi
0x85A287: mov     edx, [ebp+28h]
0x85A28A: mov     eax, [edx+4]
0x85A28D: lea     esi, [ebp+28h]
0x85A290: mov     ecx, esi
0x85A292: mov     [esp+20h+var_4], 0FFFFFFFFh
0x85A29A: call    eax
0x85A29C: mov     [eax+8], edi
0x85A29F: mov     dword ptr [eax], 0
0x85A2A5: mov     ecx, [esi+8]
0x85A2A8: mov     [eax+4], ecx
0x85A2AB: mov     ecx, [esi+8]
0x85A2AE: test    ecx, ecx
0x85A2B0: jz      loc_85A34C
0x85A2B6: mov     [ecx], eax
0x85A2B8: mov     [esi+8], eax
0x85A2BB: add     dword ptr [esi+0Ch], 1
0x85A2BF: mov     eax, [esp+20h+decalCount]
0x85A2C3: jmp     loc_85A364
0x85A2C8: cmp     byte ptr [esp+20h+emitMode], 1
0x85A2CD: jnz     loc_85A35C
0x85A2D3: push    10h; Size
0x85A2D5: call    FormHeapAlloc
0x85A2DA: add     esp, 4
0x85A2DD: mov     [esp+20h+var_10], eax
0x85A2E1: test    eax, eax
0x85A2E3: mov     [esp+20h+var_4], 1
0x85A2EB: jz      short loc_85A310
0x85A2ED: mov     edx, [esp+20h+decalPassFlags]
0x85A2F1: movzx   ecx, byte ptr [edx]
0x85A2F4: mov     edx, [esp+20h+vtable]
0x85A2F8: push    0
0x85A2FA: push    0; lightCount
0x85A2FC: push    ecx; byte6
0x85A2FD: push    18Bh; selector
0x85A302: push    edx; geometry
0x85A303: push    eax; outPass
0x85A304: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x85A309: add     esp, 18h
0x85A30C: mov     edi, eax
0x85A30E: jmp     short loc_85A312
0x85A310: xor     edi, edi
0x85A312: mov     eax, [ebp+28h]
0x85A315: mov     edx, [eax+4]
0x85A318: lea     esi, [ebp+28h]
0x85A31B: mov     ecx, esi
0x85A31D: mov     [esp+20h+var_4], 0FFFFFFFFh
0x85A325: call    edx
0x85A327: mov     [eax+8], edi
0x85A32A: mov     dword ptr [eax], 0
0x85A330: mov     ecx, [esi+8]
0x85A333: mov     [eax+4], ecx
0x85A336: mov     ecx, [esi+8]
0x85A339: test    ecx, ecx
0x85A33B: jz      short loc_85A34C
0x85A33D: mov     [ecx], eax
0x85A33F: mov     [esi+8], eax
0x85A342: add     dword ptr [esi+0Ch], 1
0x85A346: mov     eax, [esp+20h+decalCount]
0x85A34A: jmp     short loc_85A364
0x85A34C: mov     [esi+4], eax
0x85A34F: mov     [esi+8], eax
0x85A352: add     dword ptr [esi+0Ch], 1
0x85A356: mov     eax, [esp+20h+decalCount]
0x85A35A: jmp     short loc_85A364
0x85A35C: mov     ecx, [esp+20h+outPassCount]
0x85A360: add     word ptr [ecx], 1
0x85A364: sub     eax, ds:0B42E88h
0x85A36A: test    eax, eax
0x85A36C: mov     [esp+20h+decalCount], eax
0x85A370: jg      loc_85A232
0x85A376: mov     ecx, [esp+20h+var_C]
0x85A37A: mov     large fs:0, ecx
0x85A381: pop     ecx
0x85A382: pop     edi
0x85A383: pop     esi
0x85A384: pop     ebp
0x85A385: add     esp, 10h
0x85A388: retn    18h
0x9D0CA0: mov     eax, [ebp-10h]
0x9D0CA3: push    eax
0x9D0CA4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D0CA9: pop     ecx
0x9D0CAA: retn
0x9D0CAB: mov     eax, [ebp-10h]
0x9D0CAE: push    eax
0x9D0CAF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D0CB4: pop     ecx
0x9D0CB5: retn
0x9D0CB6: mov     edx, [esp+arg_4]
0x9D0CBA: lea     eax, [edx-10h]
0x9D0CBD: mov     ecx, [edx-14h]
0x9D0CC0: xor     ecx, eax
0x9D0CC2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D0CC7: mov     eax, offset stru_AF94E0
0x9D0CCC: jmp     ___CxxFrameHandler3
