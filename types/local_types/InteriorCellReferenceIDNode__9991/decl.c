struct InteriorCellReferenceIDNode
{
unsigned int referenceID; ///< Verified: overflow node stores older reference ID at +0 and next node at +4 from 452EE0..452EF2.
InteriorCellReferenceIDNode *next; ///< Verified: nullable older node chain.
};
