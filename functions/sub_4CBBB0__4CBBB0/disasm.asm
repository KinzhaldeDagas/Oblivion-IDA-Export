0x4CBBB0: push    esi; Verified: locks a cell's object list and returns the smallest-radius TESSubSpace reference containing the query position; this is the interior-cell counterpart to the WorldSpace coordinate-bucket lookup.
0x4CBBB1: mov     esi, ecx
0x4CBBB3: push    edi
0x4CBBB4: push    esi; a2
0x4CBBB5: mov     ecx, offset unk_B35C80; this
0x4CBBBA: call    sub_496EA0
0x4CBBBF: mov     ecx, [esp+8+worldPosition]
0x4CBBC3: lea     eax, [esi+48h]
0x4CBBC6: push    eax; candidateList
0x4CBBC7: push    ecx; worldPosition
0x4CBBC8: call    TESSubSpace_FindSmallestContainingPosition; Verified: scans SubSpace reference candidates, keeps only references whose local scaled bounds contain the query, and returns the containing reference with the smallest base-form bound radius (+0x2C). This is smallest-volume/radius selection, not nearest reference-center selection.
0x4CBBCD: add     esp, 8
0x4CBBD0: push    esi; a2
0x4CBBD1: mov     ecx, offset unk_B35C80; this
0x4CBBD6: mov     edi, eax
0x4CBBD8: call    sub_496F50
0x4CBBDD: mov     eax, edi
0x4CBBDF: pop     edi
0x4CBBE0: pop     esi
0x4CBBE1: retn    4
