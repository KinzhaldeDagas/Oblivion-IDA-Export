0x4E76D0: push    0FFFFFFFFh
0x4E76D2: push    offset SEH_6E3250
0x4E76D7: mov     eax, large fs:0
0x4E76DD: push    eax
0x4E76DE: push    esi
0x4E76DF: push    edi
0x4E76E0: mov     eax, ds:0B30AACh
0x4E76E5: xor     eax, esp
0x4E76E7: push    eax
0x4E76E8: lea     eax, [esp+18h+var_C]
0x4E76EC: mov     large fs:0, eax
0x4E76F2: mov     al, byte ptr [esp+18h+arg_0]
0x4E76F6: cmp     ds:0B35F84h, al
0x4E76FC: jz      loc_4E7809
0x4E7702: test    al, al
0x4E7704: mov     ds:0B35F84h, al
0x4E7709: jz      short loc_4E7787
0x4E770B: push    0DCh ; 'Ü'; Size
0x4E7710: call    FormHeapAlloc
0x4E7715: add     esp, 4
0x4E7718: mov     [esp+18h+arg_0], eax
0x4E771C: test    eax, eax
0x4E771E: mov     [esp+18h+var_4], 0
0x4E7726: jz      short loc_4E7733
0x4E7728: push    0
0x4E772A: mov     ecx, eax; this
0x4E772C: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x4E7731: jmp     short loc_4E7735
0x4E7733: xor     eax, eax
0x4E7735: push    eax; a2
0x4E7736: mov     ecx, offset dword_B35F88; this
0x4E773B: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4E7743: call    NiSmartPointer_Set??
0x4E7748: mov     esi, ds:0B35F88h
0x4E774E: call    sub_4E70B0
0x4E7753: push    eax; a2
0x4E7754: mov     ecx, esi; this
0x4E7756: call    sub_405680
0x4E775B: mov     eax, ds:0B333A0h
0x4E7760: mov     ecx, [eax+0Ch]
0x4E7763: mov     edx, [ecx]
0x4E7765: mov     eax, ds:0B35F88h
0x4E776A: mov     edx, [edx+84h]
0x4E7770: push    1
0x4E7772: push    eax
0x4E7773: call    edx
0x4E7775: mov     ecx, dword ptr [esp+18h+var_C]
0x4E7779: mov     large fs:0, ecx
0x4E7780: pop     ecx
0x4E7781: pop     edi
0x4E7782: pop     esi
0x4E7783: add     esp, 0Ch
0x4E7786: retn
0x4E7787: mov     eax, ds:0B333A0h
0x4E778C: mov     ecx, [eax+0Ch]
0x4E778F: mov     eax, ds:0B35F88h
0x4E7794: mov     edx, [ecx]
0x4E7796: mov     edx, [edx+88h]
0x4E779C: push    eax
0x4E779D: lea     eax, [esp+1Ch+arg_0]
0x4E77A1: push    eax
0x4E77A2: call    edx
0x4E77A4: mov     eax, [esp+18h+arg_0]
0x4E77A8: test    eax, eax
0x4E77AA: mov     edi, ds:0A2807Ch
0x4E77B0: jz      short loc_4E77CC
0x4E77B2: mov     esi, eax
0x4E77B4: add     eax, 4
0x4E77B7: push    eax; lpAddend
0x4E77B8: call    edi ; InterlockedDecrement
0x4E77BA: test    eax, eax
0x4E77BC: jnz     short loc_4E77CC
0x4E77BE: test    esi, esi
0x4E77C0: jz      short loc_4E77CC
0x4E77C2: mov     eax, [esi]
0x4E77C4: mov     edx, [eax]
0x4E77C6: push    1
0x4E77C8: mov     ecx, esi
0x4E77CA: call    edx
0x4E77CC: mov     ecx, ds:0B35F88h
0x4E77D2: add     ecx, 0ACh ; '¬'
0x4E77D8: call    sub_477EF0
0x4E77DD: mov     esi, ds:0B35F88h
0x4E77E3: test    esi, esi
0x4E77E5: jz      short loc_4E7809
0x4E77E7: lea     eax, [esi+4]
0x4E77EA: push    eax; lpAddend
0x4E77EB: call    edi ; InterlockedDecrement
0x4E77ED: test    eax, eax
0x4E77EF: jnz     short loc_4E77FF
0x4E77F1: test    esi, esi
0x4E77F3: jz      short loc_4E77FF
0x4E77F5: mov     edx, [esi]
0x4E77F7: mov     eax, [edx]
0x4E77F9: push    1
0x4E77FB: mov     ecx, esi
0x4E77FD: call    eax
0x4E77FF: mov     dword ptr ds:0B35F88h, 0
0x4E7809: mov     ecx, dword ptr [esp+18h+var_C]
0x4E780D: mov     large fs:0, ecx
0x4E7814: pop     ecx
0x4E7815: pop     edi
0x4E7816: pop     esi
0x4E7817: add     esp, 0Ch
0x4E781A: retn
