BSSimpleList_VoidPtr *__userpurge sub_6B7420@<eax>(
        BSSimpleList_VoidPtr *a1@<ecx>,
        double a2@<st1>,
        double a3@<st0>,
        Actor *a4,
        TESObjectREFR *a5,
        TESTopic *a6,
        int a7)
{
  a1->firstNode.data = 0;
  a1->firstNode.next = 0;
  a1[1].firstNode.data = 0;
  sub_52F830(a2, a3, a4, a5, a1, a6);
  return a1;
}
