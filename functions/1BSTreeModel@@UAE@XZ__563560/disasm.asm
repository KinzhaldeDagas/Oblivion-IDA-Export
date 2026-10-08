0x563560: push    0FFFFFFFFh; BSTreeModel destructor. Clears Gamebryo render resources first, then calls CSpeedTreeRT destructor/refcount cleanup for BSTreeModel+0x0C and frees the 0xA0 object storage.
0x563562: push    offset ??1BSTreeModel@@UAE@XZ_SEH
0x563567: mov     eax, large fs:0
0x56356D: push    eax
0x56356E: push    ecx
0x56356F: push    ebp
0x563570: push    esi
0x563571: push    edi
0x563572: mov     eax, ds:0B30AACh
0x563577: xor     eax, esp
0x563579: push    eax
0x56357A: lea     eax, [esp+20h+var_C]
0x56357E: mov     large fs:0, eax
0x563584: mov     esi, ecx
0x563586: mov     [esp+20h+var_10], esi
0x56358A: mov     dword ptr [esi], offset ??_7BSTreeModel@@6B@; const BSTreeModel::`vftable'
0x563590: mov     [esp+20h+var_4], 7
0x563598: call    BSTreeModel_ClearModel; Verified: destructor order is render-resource clear, CSpeedTreeRT shared-object release/free, release of NiPointer resources including the owning base-model reference, then NiRefObject bookkeeping.
0x56359D: mov     edi, [esi+0Ch]
0x5635A0: test    edi, edi
0x5635A2: jz      short loc_5635BB
0x5635A4: mov     ecx, edi; this
0x5635A6: call    CSpeedTreeRT__dtor; Normal BSTreeModel destructor release and the second/last Oblivion code xref to CSpeedTreeRT dtor/refcount cleanup. The wrapper storage is freed at the next call.
0x5635AB: push    edi
0x5635AC: call    FormHeapFree; Frees this model's 0xA0 CSpeedTreeRT wrapper immediately after shared cleanup. Raw wrapper addresses can be reused; sidecar identity needs a publication/link generation or the stable shared +0x30 allocation.
0x5635B1: add     esp, 4
0x5635B4: mov     dword ptr [esi+0Ch], 0
0x5635BB: mov     edi, [esi+40h]
0x5635BE: test    edi, edi
0x5635C0: mov     ebp, ds:0A2807Ch
0x5635C6: mov     byte ptr [esp+20h+var_4], 6
0x5635CB: jz      short loc_5635E5
0x5635CD: lea     eax, [edi+4]
0x5635D0: push    eax; lpAddend
0x5635D1: call    ebp ; InterlockedDecrement
0x5635D3: test    eax, eax
0x5635D5: jnz     short loc_5635E5
0x5635D7: test    edi, edi
0x5635D9: jz      short loc_5635E5
0x5635DB: mov     edx, [edi]
0x5635DD: mov     eax, [edx]
0x5635DF: push    1
0x5635E1: mov     ecx, edi
0x5635E3: call    eax
0x5635E5: mov     edi, [esi+3Ch]
0x5635E8: test    edi, edi
0x5635EA: mov     byte ptr [esp+20h+var_4], 5
0x5635EF: jz      short loc_563609
0x5635F1: lea     ecx, [edi+4]
0x5635F4: push    ecx; lpAddend
0x5635F5: call    ebp ; InterlockedDecrement
0x5635F7: test    eax, eax
0x5635F9: jnz     short loc_563609
0x5635FB: test    edi, edi
0x5635FD: jz      short loc_563609
0x5635FF: mov     edx, [edi]
0x563601: mov     eax, [edx]
0x563603: push    1
0x563605: mov     ecx, edi
0x563607: call    eax
0x563609: mov     edi, [esi+38h]
0x56360C: test    edi, edi
0x56360E: mov     byte ptr [esp+20h+var_4], 4
0x563613: jz      short loc_56362D
0x563615: lea     ecx, [edi+4]
0x563618: push    ecx; lpAddend
0x563619: call    ebp ; InterlockedDecrement
0x56361B: test    eax, eax
0x56361D: jnz     short loc_56362D
0x56361F: test    edi, edi
0x563621: jz      short loc_56362D
0x563623: mov     edx, [edi]
0x563625: mov     eax, [edx]
0x563627: push    1
0x563629: mov     ecx, edi
0x56362B: call    eax
0x56362D: mov     edi, [esi+34h]
0x563630: test    edi, edi
0x563632: mov     byte ptr [esp+20h+var_4], 3
0x563637: jz      short loc_563651
0x563639: lea     ecx, [edi+4]
0x56363C: push    ecx; lpAddend
0x56363D: call    ebp ; InterlockedDecrement
0x56363F: test    eax, eax
0x563641: jnz     short loc_563651
0x563643: test    edi, edi
0x563645: jz      short loc_563651
0x563647: mov     edx, [edi]
0x563649: mov     eax, [edx]
0x56364B: push    1
0x56364D: mov     ecx, edi
0x56364F: call    eax
0x563651: mov     edi, [esi+20h]
0x563654: test    edi, edi
0x563656: mov     byte ptr [esp+20h+var_4], 2
0x56365B: jz      short loc_563675
0x56365D: lea     ecx, [edi+4]
0x563660: push    ecx; lpAddend
0x563661: call    ebp ; InterlockedDecrement
0x563663: test    eax, eax
0x563665: jnz     short loc_563675
0x563667: test    edi, edi
0x563669: jz      short loc_563675
0x56366B: mov     edx, [edi]
0x56366D: mov     eax, [edx]
0x56366F: push    1
0x563671: mov     ecx, edi
0x563673: call    eax
0x563675: mov     edi, [esi+1Ch]
0x563678: test    edi, edi
0x56367A: mov     byte ptr [esp+20h+var_4], 1
0x56367F: jz      short loc_563699
0x563681: lea     ecx, [edi+4]
0x563684: push    ecx; lpAddend
0x563685: call    ebp ; InterlockedDecrement
0x563687: test    eax, eax
0x563689: jnz     short loc_563699
0x56368B: test    edi, edi
0x56368D: jz      short loc_563699
0x56368F: mov     edx, [edi]
0x563691: mov     eax, [edx]
0x563693: push    1
0x563695: mov     ecx, edi
0x563697: call    eax
0x563699: mov     edi, [esi+10h]; Loads BSTreeModel+0x10, the owning base-model reference installed at 0x56311B. The destructor releases it only after this instance's CSpeedTreeRT cleanup/free and other render references.
0x56369C: test    edi, edi
0x56369E: mov     byte ptr [esp+20h+var_4], 0
0x5636A3: jz      short loc_5636BD
0x5636A5: lea     ecx, [edi+4]
0x5636A8: push    ecx; lpAddend
0x5636A9: call    ebp ; InterlockedDecrement; Final release of the instance model's owning base BSTreeModel reference. Therefore a live BSTreeModel instance prevents base-wrapper-address reuse for its entire SpeedTree lifetime.
0x5636AB: test    eax, eax
0x5636AD: jnz     short loc_5636BD
0x5636AF: test    edi, edi
0x5636B1: jz      short loc_5636BD
0x5636B3: mov     edx, [edi]
0x5636B5: mov     eax, [edx]
0x5636B7: push    1
0x5636B9: mov     ecx, edi
0x5636BB: call    eax
0x5636BD: push    0B3FD64h; lpAddend
0x5636C2: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x5636C8: call    ebp ; InterlockedDecrement
0x5636CA: mov     ecx, dword ptr [esp+20h+var_C]
0x5636CE: mov     large fs:0, ecx
0x5636D5: pop     ecx
0x5636D6: pop     edi
0x5636D7: pop     esi
0x5636D8: pop     ebp
0x5636D9: add     esp, 10h
0x5636DC: retn
0x9BD370: mov     ecx, [ebp-10h]
0x9BD373: jmp     NiRefObject_destr
0x9BD378: mov     ecx, [ebp-10h]
0x9BD37B: add     ecx, 10h; slot
0x9BD37E: jmp     NiPointerSlot_Release
0x9BD383: mov     ecx, [ebp-10h]
0x9BD386: add     ecx, 1Ch; slot
0x9BD389: jmp     NiPointerSlot_Release
0x9BD38E: mov     ecx, [ebp-10h]
0x9BD391: add     ecx, 20h ; ' '; slot
0x9BD394: jmp     NiPointerSlot_Release
0x9BD399: mov     ecx, [ebp-10h]
0x9BD39C: add     ecx, 34h ; '4'; slot
0x9BD39F: jmp     NiPointerSlot_Release
0x9BD3A4: mov     ecx, [ebp-10h]
0x9BD3A7: add     ecx, 38h ; '8'; slot
0x9BD3AA: jmp     NiPointerSlot_Release
0x9BD3AF: mov     ecx, [ebp-10h]
0x9BD3B2: add     ecx, 3Ch ; '<'; slot
0x9BD3B5: jmp     NiPointerSlot_Release
0x9BD3BA: mov     ecx, [ebp-10h]
0x9BD3BD: add     ecx, 40h ; '@'; slot
0x9BD3C0: jmp     NiPointerSlot_Release
0x9BD3C5: mov     edx, [esp+arg_4]
0x9BD3C9: lea     eax, [edx-10h]
0x9BD3CC: mov     ecx, [edx-14h]
0x9BD3CF: xor     ecx, eax
0x9BD3D1: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BD3D6: mov     eax, offset stru_AE6D60
0x9BD3DB: jmp     ___CxxFrameHandler3
