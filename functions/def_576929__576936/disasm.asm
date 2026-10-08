0x576936: movzx   ecx, al; jumptable 00576929 default case
0x576939: cmp     ecx, 100h
0x57693F: jle     short loc_576943
0x576941: xor     al, al
0x576943: mov     ecx, [esp+arg_8C]
0x57694A: movzx   eax, al
0x57694D: lea     edx, ds:0[eax*8]
0x576954: sub     edx, eax
0x576956: mov     eax, [edi+38h]
0x576959: push    ecx
0x57695A: mov     ecx, [esp+4+arg_90]
0x576961: lea     eax, [eax+edx*8+128h]
0x576968: lea     edx, [esp+4+arg_2C]
0x57696C: push    edx
0x57696D: push    ebp
0x57696E: push    ecx
0x57696F: push    eax
0x576970: mov     ecx, edi
0x576972: call    sub_573F10
0x576977: mov     ebx, [esp+arg_74]
0x57697B: fld     [esp+arg_2C]
0x57697F: add     [esp+arg_90], 1
0x576987: fld     st
0x576989: fst     [esp+arg_18]
0x57698D: fsub    qword ptr [esp+arg_20]
0x576991: fild    dword ptr [ebx]
0x576993: fcom    st(1)
0x576995: fnstsw  ax
0x576997: test    ah, 5
0x57699A: jp      short loc_5769A0
0x57699C: fstp    st
0x57699E: jmp     short loc_5769A2
0x5769A0: fstp    st(1)
0x5769A2: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5769A7: mov     ecx, [esp+arg_10]
0x5769AB: mov     [ebx], eax
0x5769AD: mov     eax, [esp+arg_70]
0x5769B1: add     eax, 1
0x5769B4: mov     edx, ecx
0x5769B6: neg     edx
0x5769B8: sbb     edx, edx
0x5769BA: and     edx, eax
0x5769BC: cmp     byte ptr [edx+ecx], 0
0x5769C0: mov     [esp+arg_70], eax
0x5769C4: lea     eax, [edx+ecx]
0x5769C7: jnz     loc_576816
0x5769CD: mov     ebx, ecx
0x5769CF: mov     eax, [ebp+0B4h]
0x5769D5: fstp    st
0x5769D7: mov     ecx, [eax+1Ch]
0x5769DA: movzx   edx, word ptr [eax+8]
0x5769DE: push    ecx; vertices
0x5769DF: movzx   ecx, dx
0x5769E2: push    ecx; vertexCount
0x5769E3: lea     ecx, [eax+0Ch]; self
0x5769E6: call    NiSphere_ComputeFromVertices; Local bounding sphere for contiguous NiPoint3 array: midpoint of component minima/maxima; radius=max vertex distance to midpoint; zero-count case clears sphere. Writes sphere only, not NiAVObject world bounds or renderer dirty flags. Prettier Faces invokes after morph on direct CPU vertex data; propagation of world bounds remains a separate runtime verification requirement.
0x5769EB: lea     ecx, [esp+arg_38]
0x5769EF: mov     [esp+arg_68], 0
0x5769F4: call    sub_5756A0
0x5769F9: push    ebx
0x5769FA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5769FF: add     esp, 4
0x576A02: mov     eax, ebp
0x576A04: mov     ecx, [esp+arg_60]
0x576A08: mov     large fs:0, ecx
0x576A0F: pop     ecx
0x576A10: pop     edi
0x576A11: pop     esi
0x576A12: pop     ebp
0x576A13: pop     ebx
0x576A14: add     esp, 5Ch
0x576A17: retn    24h ; '$'
