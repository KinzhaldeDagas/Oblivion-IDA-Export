0x4E7DC0: push    esi
0x4E7DC1: mov     esi, ecx
0x4E7DC3: call    TESPathGrid_dtor; Verified TESPathGrid destruction order: clear rendered geometry; clear point array/backlinks; free PGRI rows; clear every pointsByCell (+0x44) bucket list (512-unit X/Y spatial buckets); release component references; release shared point-marker/render resources on the last instance; destroy both pointer-map containers and render node; then destroy TESForm base.
0x4E7DC8: test    byte ptr [esp+4+arg_0], 1
0x4E7DCD: jz      short loc_4E7DD8
0x4E7DCF: push    esi
0x4E7DD0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4E7DD5: add     esp, 4
0x4E7DD8: mov     eax, esi
0x4E7DDA: pop     esi
0x4E7DDB: retn    4
