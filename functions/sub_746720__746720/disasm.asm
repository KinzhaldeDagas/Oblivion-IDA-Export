0x746720: push    ecx
0x746721: mov     ecx, [eax+16B4h]
0x746727: cmp     ecx, 0Bh
0x74672A: push    ebx
0x74672B: mov     ebx, [esp+8+arg_8]
0x74672F: push    ebp
0x746730: push    esi
0x746731: push    edi
0x746732: mov     ebp, 1
0x746737: jle     short loc_746797
0x746739: mov     esi, [esp+14h+arg_0]
0x74673D: add     esi, 0FFFFFEFFh
0x746743: mov     edx, esi
0x746745: shl     edx, cl
0x746747: mov     ecx, [eax+14h]
0x74674A: or      [eax+16B0h], dx
0x746751: movzx   ebx, byte ptr [eax+16B0h]
0x746758: mov     edx, [eax+8]
0x74675B: mov     [ecx+edx], bl
0x74675E: add     [eax+14h], ebp
0x746761: movzx   ebx, byte ptr [eax+16B1h]
0x746768: mov     ecx, [eax+14h]
0x74676B: mov     edx, [eax+8]
0x74676E: mov     [ecx+edx], bl
0x746771: mov     edx, [eax+16B4h]
0x746777: add     [eax+14h], ebp
0x74677A: mov     ebx, [esp+14h+arg_8]
0x74677E: mov     cl, 10h
0x746780: sub     cl, dl
0x746782: shr     si, cl
0x746785: add     edx, 0FFFFFFF5h
0x746788: mov     [eax+16B4h], edx
0x74678E: mov     [eax+16B0h], si
0x746795: jmp     short loc_7467B3
0x746797: mov     edx, [esp+14h+arg_0]
0x74679B: add     edx, 0FFFFFEFFh
0x7467A1: shl     edx, cl
0x7467A3: or      [eax+16B0h], dx
0x7467AA: add     ecx, 5
0x7467AD: mov     [eax+16B4h], ecx
0x7467B3: mov     ecx, [eax+16B4h]
0x7467B9: cmp     ecx, 0Bh
0x7467BC: jle     short loc_74681D
0x7467BE: mov     esi, [esp+14h+arg_4]
0x7467C2: add     esi, 0FFFFFFFFh
0x7467C5: mov     edx, esi
0x7467C7: shl     edx, cl
0x7467C9: mov     ecx, [eax+14h]
0x7467CC: mov     [esp+14h+var_4], ebx
0x7467D0: or      [eax+16B0h], dx
0x7467D7: movzx   ebx, byte ptr [eax+16B0h]
0x7467DE: mov     edx, [eax+8]
0x7467E1: mov     [ecx+edx], bl
0x7467E4: add     [eax+14h], ebp
0x7467E7: movzx   ebx, byte ptr [eax+16B1h]
0x7467EE: mov     ecx, [eax+14h]
0x7467F1: mov     edx, [eax+8]
0x7467F4: mov     [ecx+edx], bl
0x7467F7: mov     edx, [eax+16B4h]
0x7467FD: add     [eax+14h], ebp
0x746800: mov     ebx, [esp+14h+var_4]
0x746804: mov     cl, 10h
0x746806: sub     cl, dl
0x746808: shr     si, cl
0x74680B: add     edx, 0FFFFFFF5h
0x74680E: mov     [eax+16B4h], edx
0x746814: mov     [eax+16B0h], si
0x74681B: jmp     short loc_746836
0x74681D: mov     edx, [esp+14h+arg_4]
0x746821: add     edx, 0FFFFFFFFh
0x746824: shl     edx, cl
0x746826: or      [eax+16B0h], dx
0x74682D: add     ecx, 5
0x746830: mov     [eax+16B4h], ecx
0x746836: mov     ecx, [eax+16B4h]
0x74683C: cmp     ecx, 0Ch
0x74683F: jle     short loc_74689C
0x746841: lea     esi, [ebx-4]
0x746844: mov     edx, esi
0x746846: shl     edx, cl
0x746848: mov     ecx, [eax+14h]
0x74684B: mov     [esp+14h+var_4], ebx
0x74684F: or      [eax+16B0h], dx
0x746856: movzx   ebx, byte ptr [eax+16B0h]
0x74685D: mov     edx, [eax+8]
0x746860: mov     [ecx+edx], bl
0x746863: add     [eax+14h], ebp
0x746866: movzx   ebx, byte ptr [eax+16B1h]
0x74686D: mov     ecx, [eax+14h]
0x746870: mov     edx, [eax+8]
0x746873: mov     [ecx+edx], bl
0x746876: mov     edx, [eax+16B4h]
0x74687C: add     [eax+14h], ebp
0x74687F: mov     ebx, [esp+14h+var_4]
0x746883: mov     cl, 10h
0x746885: sub     cl, dl
0x746887: shr     si, cl
0x74688A: add     edx, 0FFFFFFF4h
0x74688D: mov     [eax+16B4h], edx
0x746893: mov     [eax+16B0h], si
0x74689A: jmp     short loc_7468B1
0x74689C: lea     edx, [ebx-4]
0x74689F: shl     edx, cl
0x7468A1: or      [eax+16B0h], dx
0x7468A8: add     ecx, 4
0x7468AB: mov     [eax+16B4h], ecx
0x7468B1: xor     edi, edi
0x7468B3: test    ebx, ebx
0x7468B5: jle     loc_746953
0x7468BB: jmp     short loc_7468C0
0x7468BD: align 10h
0x7468C0: mov     ecx, [eax+16B4h]
0x7468C6: cmp     ecx, 0Dh
0x7468C9: movzx   edx, ds:byte_A849FC[edi]
0x7468D0: jle     short loc_74692E
0x7468D2: movzx   esi, word ptr [eax+edx*4+0A76h]
0x7468DA: mov     edx, esi
0x7468DC: shl     edx, cl
0x7468DE: mov     ecx, [eax+14h]
0x7468E1: or      [eax+16B0h], dx
0x7468E8: movzx   ebx, byte ptr [eax+16B0h]
0x7468EF: mov     edx, [eax+8]
0x7468F2: mov     [ecx+edx], bl
0x7468F5: add     [eax+14h], ebp
0x7468F8: movzx   ebx, byte ptr [eax+16B1h]
0x7468FF: mov     ecx, [eax+14h]
0x746902: mov     edx, [eax+8]
0x746905: mov     [ecx+edx], bl
0x746908: mov     edx, [eax+16B4h]
0x74690E: add     [eax+14h], ebp
0x746911: mov     ebx, [esp+14h+arg_8]
0x746915: mov     cl, 10h
0x746917: sub     cl, dl
0x746919: shr     si, cl
0x74691C: add     edx, 0FFFFFFF3h
0x74691F: mov     [eax+16B4h], edx
0x746925: mov     [eax+16B0h], si
0x74692C: jmp     short loc_746949
0x74692E: mov     dx, [eax+edx*4+0A76h]
0x746936: shl     dx, cl
0x746939: or      [eax+16B0h], dx
0x746940: add     ecx, 3
0x746943: mov     [eax+16B4h], ecx
0x746949: add     edi, ebp
0x74694B: cmp     edi, ebx
0x74694D: jl      loc_7468C0
0x746953: mov     ecx, [esp+14h+arg_0]
0x746957: add     ecx, 0FFFFFFFFh
0x74695A: lea     edx, [eax+8Ch]
0x746960: call    sub_746200
0x746965: mov     ecx, [esp+14h+arg_4]
0x746969: pop     edi
0x74696A: pop     esi
0x74696B: pop     ebp
0x74696C: add     ecx, 0FFFFFFFFh
0x74696F: lea     edx, [eax+980h]
0x746975: pop     ebx
0x746976: add     esp, 4
0x746979: jmp     sub_746200
