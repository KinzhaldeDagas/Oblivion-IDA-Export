0x533380: push    0FFFFFFFFh
0x533382: push    offset ??0CellMopp@@QAE@XZ_SEH
0x533387: mov     eax, large fs:0
0x53338D: push    eax
0x53338E: push    ecx
0x53338F: push    esi
0x533390: push    edi
0x533391: mov     eax, ds:0B30AACh
0x533396: xor     eax, esp
0x533398: push    eax
0x533399: lea     eax, [esp+1Ch+var_C]
0x53339D: mov     large fs:0, eax
0x5333A3: mov     esi, ecx
0x5333A5: xor     edi, edi
0x5333A7: push    offset NiRefObject_objcount; lpAddend
0x5333AC: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x5333B2: mov     [esi+4], edi
0x5333B5: call    dword ptr ds:0A28078h
0x5333BB: mov     dword ptr [esi], offset ??_7CellMopp@@6B@; const CellMopp::`vftable'
0x5333C1: mov     eax, 1
0x5333C6: mov     [esi+16h], ax
0x5333CA: mov     dword ptr [esi+8], offset ??_7?$NiTArray@V?$NiPointer@VbhkRigidBody@@@@@@6B@; const NiTArray<NiPointer<bhkRigidBody>>::`vftable'
0x5333D1: mov     [esi+10h], di
0x5333D5: mov     [esi+12h], di
0x5333D9: mov     [esi+14h], di
0x5333DD: mov     [esi+0Ch], edi
0x5333E0: add     ds:0B36588h, eax
0x5333E6: mov     eax, esi
0x5333E8: mov     ecx, [esp+1Ch+var_C]
0x5333EC: mov     large fs:0, ecx
0x5333F3: pop     ecx
0x5333F4: pop     edi
0x5333F5: pop     esi
0x5333F6: add     esp, 10h
0x5333F9: retn
