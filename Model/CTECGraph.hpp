//
//  CTECGraph.hpp
//  NodeProject
//
//  Created by Kinzer, Adam on 4/25/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef CTECGraph_hpp
#define CTECGraph_hpp

namespace CTECData
{
    template <class Type>
    class CTECGraph
    {
    private:
        static const int MAXIMUM = 20;
        bool adjacencyMatrix [MAXIMUM] [MAXIMUM];
        Type labels[MAXIMUM];
        int manyVertices;
    public:
        CTECGraph();
        ~CTECGraph();
    };
}

#endif /* CTECGraph_hpp */
