0x557B30: push    esi
0x557B31: mov     esi, ecx
0x557B33: mov     eax, [esi+4]
0x557B36: test    eax, eax
0x557B38: jz      short loc_557B52
0x557B3A: mov     ecx, [esi+8]
0x557B3D: push    ecx; end
0x557B3E: push    eax; begin
0x557B3F: mov     ecx, esi
0x557B41: call    FaceGenEgtBasisRecordArray_Destruct; Destroy the three owned image-channel vectors at +0x10 in every 64-byte EGT basis record.
0x557B46: mov     edx, [esi+4]
0x557B49: push    edx
0x557B4A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x557B4F: add     esp, 4
0x557B52: mov     dword ptr [esi+4], 0
0x557B59: mov     dword ptr [esi+8], 0
0x557B60: mov     dword ptr [esi+0Ch], 0
0x557B67: pop     esi
0x557B68: retn
