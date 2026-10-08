0x4CA990: add     ecx, 28h ; '('; Verified cell helper: returns ExtraRank.rank from the cell's XRNK extra, substituting 0 when no rank extra exists.
0x4CA993: call    ExtraDataList_GetRank; Verified accessor: returns ExtraRank.rank as signed 32-bit; returns -1 when kExtraData_Rank is absent. Cell ownership compares this required rank against the actor's faction rank.
0x4CA998: mov     ecx, eax
0x4CA99A: sub     eax, 0FFFFFFFFh
0x4CA99D: neg     eax
0x4CA99F: sbb     eax, eax
0x4CA9A1: and     eax, ecx
0x4CA9A3: retn
