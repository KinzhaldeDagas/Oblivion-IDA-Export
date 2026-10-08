0x4F0600: push    esi; Verified: queries the SubSpace candidate list for the position-derived cell key, then returns the smallest-radius TESSubSpace whose exact scaled local bounds contain the point.
0x4F0601: mov     esi, [esp+4+worldPosition]
0x4F0605: push    esi; worldPosition
0x4F0606: call    TESWorldSpace_GetSubSpaceCandidatesAtPosition; Verified: retrieves the +0x60 coordinate bucket using the SubSpace reference's position-derived signed-X/unsigned-Y cell key (shift 12 after engine float-to-int conversion), returning its 8-byte list head. The writer populates every bucket touched by the scaled SubSpace radius.
0x4F060B: push    eax; candidateList
0x4F060C: push    esi; worldPosition
0x4F060D: call    TESSubSpace_FindSmallestContainingPosition; Verified: scans SubSpace reference candidates, keeps only references whose local scaled bounds contain the query, and returns the containing reference with the smallest base-form bound radius (+0x2C). This is smallest-volume/radius selection, not nearest reference-center selection.
0x4F0612: add     esp, 8
0x4F0615: pop     esi
0x4F0616: retn    4
