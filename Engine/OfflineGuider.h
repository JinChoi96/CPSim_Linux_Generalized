#ifndef OFFLINEGUIDER_H__
#define OFFLINEGUIDER_H__

#include "Utils.h"

/** This file is engine code of CPSim-Re engine
 * @file OfflineGuider.h
 * @class OfflineGuider
 * @author Alex Noble
 * @date 2020-06-03
 * @brief Codes for Engine-OfflineGuider 
*/

class OfflineGuider {
private:
public:
    /**
     * Constructor & Destructor
    */
    OfflineGuider();
    ~OfflineGuider();
    /**
     * Generate Offline Guider
     */
    void construct_job_precedence_graph();
    void construct_start_job_sets(int ecu_id, std::shared_ptr<Job>& current_job);
    void construct_finish_job_sets(int ecu_id, std::shared_ptr<Job>& current_job);
    std::vector<std::shared_ptr<Job>> make_job_set_finish_det(int, std::shared_ptr<Job>&);
    std::vector<std::shared_ptr<Job>> make_job_set_finish_non_det(int, std::shared_ptr<Job>&);
    std::vector<std::shared_ptr<Job>> make_job_set_pro_con_det(int, std::shared_ptr<Job>&);
    std::vector<std::shared_ptr<Job>> make_job_set_pro_con_non_det(int, std::shared_ptr<Job>&);
};

#endif