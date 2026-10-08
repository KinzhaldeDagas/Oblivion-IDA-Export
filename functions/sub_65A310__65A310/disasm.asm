0x65A310: call    MobileObject_GetCharProxy; TES4 authoritative: MobileObject_GetCharProxy uses process vfunc GetCharProxy and releases the smart pointer wrapper. Use to confirm recovered owner maps back to the same proxy.
0x65A315: test    eax, eax
0x65A317: jz      short locret_65A32C
0x65A319: cmp     byte ptr [esp+arg_0], 0
0x65A31E: setz    cl
0x65A321: mov     [esp+arg_0], ecx
0x65A325: mov     ecx, eax
0x65A327: jmp     loc_8927E0
0x65A32C: retn    4
0x8927E0: push    esi
0x8927E1: mov     esi, ecx
0x8927E3: mov     ecx, [esi+368h]
0x8927E9: test    ecx, ecx
0x8927EB: jz      short loc_89285F
0x8927ED: cmp     byte ptr [ecx+68h], 0
0x8927F1: mov     al, byte ptr [esp+4+arg_0]
0x8927F5: setz    dl
0x8927F8: cmp     al, dl
0x8927FA: jz      short loc_89285F
0x8927FC: test    al, al
0x8927FE: jz      short loc_89284B
0x892800: push    edi
0x892801: push    0
0x892803: call    sub_88D560
0x892808: mov     ecx, [esi+8]
0x89280B: test    ecx, ecx
0x89280D: mov     edi, [esi+368h]
0x892813: jz      short loc_89281C
0x892815: call    bhkCollisionWrapper_GetHavokObject; bhk collision wrapper accessor: returns stored low-level Havok object pointer at wrapper+0x30.
0x89281A: jmp     short loc_89281E
0x89281C: xor     eax, eax
0x89281E: mov     eax, [eax+8]
0x892821: test    eax, eax
0x892823: jz      short loc_89283A
0x892825: mov     eax, [eax+2B0h]
0x89282B: mov     edx, [edi]
0x89282D: push    eax
0x89282E: mov     eax, [edx+5Ch]
0x892831: mov     ecx, edi
0x892833: call    eax
0x892835: pop     edi
0x892836: pop     esi
0x892837: retn    4
0x89283A: mov     edx, [edi]
0x89283C: xor     eax, eax
0x89283E: push    eax
0x89283F: mov     eax, [edx+5Ch]
0x892842: mov     ecx, edi
0x892844: call    eax
0x892846: pop     edi
0x892847: pop     esi
0x892848: retn    4
0x89284B: mov     edx, [ecx]
0x89284D: mov     eax, [edx+60h]
0x892850: call    eax
0x892852: mov     ecx, [esi+368h]
0x892858: push    1
0x89285A: call    sub_88D560
0x89285F: pop     esi
0x892860: retn    4
